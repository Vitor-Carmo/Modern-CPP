#include <iostream>
#include <cmath>

class Point
{
private:
    int x_, y_ = 0;

public:
    Point(int x, int y) : x_{x}, y_{y} {};

    float distance(const Point &other) const
    {
        float x_diff = x_ - other.x_;
        float y_diff = y_ - other.y_;

        return sqrt(x_diff * x_diff + y_diff * y_diff);
    }

    static float distance(const Point &a, const Point &b)
    {
        return a.distance(b);
    }
};

int main()
{
    Point a(1, 1);
    Point b(2, 2);

    std::cout << "The distance is " << a.distance(b) << std::endl;
    std::cout << "The distance is " << Point::distance(a, b) << std::endl;
    return 0;
}
