#include <iostream>
#include "Point.h"
#include "Line.h"

int main()
{
	Point startPoint(1, 5);
	Point endPoint(4);

	Line line(startPoint, endPoint);

	line.display();


	std::cout << "Line distance: " << line.distance() << std::endl;


	return 0;
}