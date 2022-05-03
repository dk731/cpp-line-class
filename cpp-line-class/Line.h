#pragma once
#include "Point.h";
#include <iostream>
class Line
{
public:
	Line(Point& p1, Point& p2);

	void display();
	float distance();

private:
	Point p1, p2;
};

