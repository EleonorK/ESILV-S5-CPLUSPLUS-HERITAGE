#include "circle.h"
#define _USE_MATH_DEFINES // for C++
#include <cmath>

Circle::Circle(int x, int y, int c, int r) : Shape(x,y,c), radius {r} {}

int Circle::getDiameter() const {return 2* M_PI  * radius;}

std::ostream & operator<<(std::ostream & out, const Circle & c) {
    Shape c2 = c;
    out << c2 << "which is a circle with " << "radius = " << c.radius << ", and diameter = " << c.getDiameter() << std::endl;
	
    //out << static_cast<const Shape &>(c) << "which is a circle with " << "radius = " << c.radius << ", and diameter = " << c.getDiameter() << std::endl;
	return out;
}
