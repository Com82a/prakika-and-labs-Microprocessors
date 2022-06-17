#include <iostream>
#include <cmath>

typedef struct
{
    float x, y;
} Point;

template <class T> T sqr(T a) { return a * a; }

float dist(Point a, Point b) { return sqrt(sqr(a.x - b.x) + sqr(a.y - b.y)); }

bool func(Point a, Point b, Point c)
{
    if (dist(a, b) + dist(a, c) <= dist(c, b))
        return 0;
    if (dist(a, b) + dist(c, b) <= dist(a, c))
        return 0;
    if (dist(c, b) + dist(c, a) <= dist(a, b))
        return 0;
    return 1;
}

int main()
{
    Point a, b, c;
    std::cout << "Enter A(x,y) B(x,y) C(x,y)" << std::endl;
    std::cout << "A(x): ";
    std::cin >> a.x;
    std::cout << "A(y): ";
    std::cin >> a.y;
    std::cout << "A: (" << a.x << ";" << a.y << ")" << std::endl;
    std::cout << "B(x): ";
    std::cin >> b.x;
    std::cout << "B(y): ";
    std::cin >> b.y;
    std::cout << "B: (" << b.x << ";" << b.y << ")" << std::endl;
    std::cout << "C(x): ";
    std::cin >> c.x;
    std::cout << "C(y): ";
    std::cin >> c.y;
    std::cout << "C: (" << c.x << ";" << c.y << ")" << std::endl;
    std::cout << (func(a, b, c) ? "Yes, It's right triangle ABC" : "No, It is not right triangle ABC") << std::endl;
    return 0;
}
