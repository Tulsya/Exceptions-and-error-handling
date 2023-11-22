#include "Square.h"

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) : Rectangle(a, b, c, d, A, B, C, D) {
    Rectangle::name_ = " вадрат";
    if (!(c == b)) throw ShapeCreationError("стороны не равны");
}
