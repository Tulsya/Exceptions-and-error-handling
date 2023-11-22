#include "Rectangle.h"

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(a, b, c, d, A, B, C, D) {
    Quadrilateral::name_ = "Прямоугольник";
    if (!(A == 90 && B == 90 && C == 90 && D == 90)) throw ShapeCreationError("углы не равны 90");
}
