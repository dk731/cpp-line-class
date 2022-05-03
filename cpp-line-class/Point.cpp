#include "Point.h"

Point::Point(float x): x(x), y(x)
{
}

Point::Point(float x, float y): x(x), y(y)
{
}

std::ostream& operator<<(std::ostream& stream, const Point& point)
{
	stream << point.x << ", " << point.y;

	return stream;
}