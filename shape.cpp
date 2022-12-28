#include "shape.h"

Shape::Shape(int x, int y, int c) : x {x}, y {y}, color {c} {}

void Shape::changeColor(int c) {
	color = c;
}

std::ostream & operator<<(std::ostream & out, const Shape & s) {
	out << "Shape with x = " << s.x << ", y = " << s.y << ", color = " << s.color << std::endl;
	return out;
}
