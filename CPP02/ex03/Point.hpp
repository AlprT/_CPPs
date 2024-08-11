#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

using std::cout;
using std::endl;

class Point
{
    private:
        Fixed m_x;
        Fixed m_y;
    public:
        Point();
        Point(const Point &point);
        Point(const float x, const float y);

        ~Point();

        Point &operator=(const Point &point);

        Fixed getX(void) const;
        Fixed getY(void) const;
};

#endif
