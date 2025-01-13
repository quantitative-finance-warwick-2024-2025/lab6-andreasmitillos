#pragma once
#include "Point.hpp"

class Line 
{
    Point m_p1;
    Point m_p2;

    public:
        Line(const Point* p1, const Point* p2);
        const Point* p1() const;
        const Point* p2() const;
        double length() const;
};