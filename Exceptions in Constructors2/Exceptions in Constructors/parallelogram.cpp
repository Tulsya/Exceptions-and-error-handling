#include "parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
    Quadrilateral::name_ = "Параллелограмм";
    if (!(a == c && b == d)) throw ShapeCreationError("стороны не попарно равны");
    if (!(A == C && B == D)) throw ShapeCreationError("углы не попарно равны");
};
