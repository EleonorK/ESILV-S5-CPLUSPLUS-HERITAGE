#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "shape.h"

class Rectangle : public Shape {
    private :
        int height;
        int width;
    public :
		Rectangle(int x, int y, int c, int h, int w);
        double getDiagonal() const;
    friend std::ostream & operator<<(std::ostream & out, const Rectangle & r);
};
#endif
