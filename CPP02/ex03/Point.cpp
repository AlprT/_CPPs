
#include "Point.hpp"

Point::Point() : m_x(0), m_y(0) {}

Point::Point(const float x, const float y) : m_x(x), m_y(y) {}

Point::Point(const Point &point) { *this = point; }

Point::~Point() {}

Point &Point::operator=(const Point &point) {
    if (this == &point)
        return *this;

    m_x = point.getX();
    m_y = point.getY();

    return *this;
}

Fixed Point::getX(void) const { return m_x; }

Fixed Point::getY(void) const { return m_y; }

std::ostream &operator<<(std::ostream &out, const Point &point) {
    out << "Point(" << point.getX() << ", " << point.getY() << ")";
    return out;
}
