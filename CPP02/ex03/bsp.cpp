
#include "Point.hpp"
#include "Fixed.hpp"

static float area(const Point a, const Point b, const Point c) {
    Fixed area;
    area = (a.getX() * (b.getY() - c.getY()) + 
            b.getX() * (c.getY() - a.getY()) +
            c.getX() * (a.getY() - b.getY())) / 2;

    float ret = area.toFloat();
    return ret < 0 ? -ret : ret;
}

bool bsp(const Point a, const Point b, const Point c, const Point point) {
    float d0, d1, d2, d3;

    d0 = area(a, b, c);
    d1 = area(point, a, b);
    d2 = area(point, c, b);
    d3 = area(point, c, a);

    if (d1 == 0 || d2 == 0 || d3 == 0)
        return false;
    else if (d1 + d2 + d3 == d0)
        return true;
    return false;
}
