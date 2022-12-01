#include <SFML/Graphics.hpp>

using namespace sf;

const int WIDTH = 1280;
const int HEIGHT = 720;

RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "Circles!");


CircleShape defineNewCircle(float x, float y, float diameter)
{
    CircleShape circle(diameter);
    circle.setFillColor(Color::Transparent);
    circle.setOutlineThickness(1.3f);
    circle.setPosition(x / 2 - diameter, y - diameter / 2);

    return circle;
}

void recursiveDrawCircle(float x, float y, float diameter)
{
    CircleShape circle = defineNewCircle(x, y, diameter);
    window.draw(circle);

    if (diameter > 2)
    {
        recursiveDrawCircle(x + diameter / 2, y, diameter / 2);
        recursiveDrawCircle(x - diameter / 2, y, diameter / 2);
        recursiveDrawCircle(x, y + diameter / 2, diameter / 2);
    }
}

int main()
{
    float diameter = 350;

    while (window.isOpen())
    {
        Event event{};
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();

        recursiveDrawCircle(WIDTH, 185, diameter); //185 bc i couldn't find a general value so i hard-coded it

        window.display();
    }

    return 0;
}