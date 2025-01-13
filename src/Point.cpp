#include "Point.hpp"
#include <iostream>
#include <math.h> // for sqrt

Point::Point(double x, double y)
  : m_x(x), m_y(y)
{}

double Point::x() const
{
  /// FILL THIS IN
  return m_x;
}

double Point::y() const
{
  /// FILL THIS IN
  return m_y;
}

double Point::compute_norm() const
{
  return sqrt(m_x * m_x + m_y * m_y);
}

void Point::info() const
{
  /// FILL THIS IN
  std::cout << "Point: (" << m_x << ", " << m_y << ") with norm = " << compute_norm() << std::endl;
}

Point Point::add(const Point* p) const
{
  /// FILL THIS IN
  return Point(m_x + p->x(), m_y + p->y());
}

Point Point::subtract(const Point* p) const
{
  /// FILL THIS IN
  return Point(m_x - p->x(), m_y - p->y());
}
