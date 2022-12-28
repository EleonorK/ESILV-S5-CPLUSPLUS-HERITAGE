#include "rectangle.h"
#include <cmath>

Rectangle::Rectangle(int x, int y, int c, int h, int w) : Shape(x,y,c), height {h}, width {w} {

}

double Rectangle::getDiagonal() const {

    return sqrt(height * height + width * width);}

std::ostream & operator<<(std::ostream & out, const Rectangle & r) {
    
   // Shape s = r;// copier r dans un objet s déclaré comme un Shape, c'est une projection dans Shape de r 
   // out << s << "which is a rectangle with " << "height = " << r.height << ", width = " << r.width << ", and diagonal = " << r.getDiagonal() << std::endl;
    out << static_cast<const Shape &>(r) << "which is a rectangle with " << "height = " << r.height << ", width = " << r.width << ", and diagonal = " << r.getDiagonal() << std::endl;
	return out;
}
