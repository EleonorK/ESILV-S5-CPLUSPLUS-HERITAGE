#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

class Shape {
    protected :
        int x;
        int y;
        int color;
    public :
        Shape(int x, int y, int c);
        void changeColor(int c);
    friend std::ostream & operator<<(std::ostream & out, const Shape & s);
};
#endif
