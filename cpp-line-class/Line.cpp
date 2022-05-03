#include "Line.h"

Line::Line(Point& p1, Point& p2): p1(p1), p2(p2)
{
}

void Line::display()
{
	std::cout << "Start (x, y): " << this->p1 << std::endl;
	std::cout << "End   (x, y): " << this->p2 << std::endl;
}

float Line::distance()
{
	return sqrt(pow(this->p1.getX() - this->p2.getX(), 2) + pow(this->p1.getY() - this->p2.getY(), 2));
}
