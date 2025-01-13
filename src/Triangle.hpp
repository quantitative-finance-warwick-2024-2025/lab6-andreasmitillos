#pragma once
#include "Point.hpp"
#include "Line.hpp"

class Triangle
{
    Point m_p1;
    Point m_p2;
    Point m_p3;

    public:
        Triangle(const Point* p1, const Point* p2, const Point* p3);
        Triangle(const Point* p, const Line* l);
        double perimeter() const;
};