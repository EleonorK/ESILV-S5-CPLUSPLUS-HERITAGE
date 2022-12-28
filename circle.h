#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "shape.h"

class Circle : public Shape {
    private :
        int radius;
    public :
		Circle(int x, int y, int c, int r);
        int getDiameter() const;
    friend std::ostream & operator<<(std::ostream & out, const Circle & c);
};
#endif
