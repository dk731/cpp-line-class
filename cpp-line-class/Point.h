#pragma once
#include <iostream>

class Point
{
public:
	Point(float x);
	Point(float x, float y);

	float getX() { return this->x; };
	float getY() { return this->y; };

	friend std::ostream& operator<< (std::ostream& stream, const Point& point);

private:
	float x, y;
};

