#include "isoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
    Triangle::name_ = "–авнобедренный треугольник";
    if (!(a == c)) throw ShapeCreationError("боковые стороны не равны");
    if (!(A == C)) throw ShapeCreationError("углы при боковых сторонах не равны");
}