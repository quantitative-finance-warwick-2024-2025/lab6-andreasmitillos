#include "Triangle.hpp"
#include "Point.hpp"
#include "Line.hpp"

// Constructor for Triangle - using 3 points
Triangle::Triangle(const Point* p1, const Point* p2, const Point* p3)
    : m_p1(*p1), m_p2(*p2), m_p3(*p3)
    {}

// Constructor for triangle - using 1 point and 1 line
Triangle::Triangle(const Point* p, const Line* l)
    : m_p1(*p), m_p2(*l->p1()), m_p3(*l->p2())
    {}

// Calculate the perimeter of the triangle
double Triangle::perimeter() const
{
    Line l1(&m_p1, &m_p2);
    Line l2(&m_p2, &m_p3);
    Line l3(&m_p3, &m_p1);

    return l1.length() + l2.length() + l3.length();
}