#include "Line.hpp"

// Constructor
Line::Line(const Point* p1, const Point* p2)
    : m_p1(*p1), m_p2(*p2)
{}

// Return first point
const Point* Line::p1() const
{
    return &m_p1;
}

// Return second point
const Point* Line::p2() const
{
    return &m_p2;
}

// Return the length of the line
double Line::length() const
{
    Point subtracted = m_p1.subtract(&m_p2);
    return subtracted.compute_norm();
}