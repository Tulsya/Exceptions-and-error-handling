#include "Quadrilateral.h"
#include "shapeCreationError.h"
#include <iostream>

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) {
    name_ = "Четырехугольник";
    a_ = a;
    b_ = b;
    c_ = c;
    d_ = d;
    A_ = A;
    B_ = B;
    C_ = C;
    D_ = D;
    if (a != 0 && b != 0 && c != 0 && d!=0) sides_count = 4;
    if ((A + B + C + D) != 360) throw ShapeCreationError("сумма углов не равна 360");
    if (sides_count != 4) throw ShapeCreationError("количество сторон не равно 4");
}

int Quadrilateral::get_a() {
    return a_;
}

int Quadrilateral::get_b() {
    return b_;
}

int Quadrilateral::get_c() {
    return c_;
}

int Quadrilateral::get_d() {
    return d_;
}

int Quadrilateral::get_A() {
    return A_;
}

int Quadrilateral::get_B() {
    return B_;
}

int Quadrilateral::get_C() {
    return C_;
}

int Quadrilateral::get_D() {
    return D_;
}

void Quadrilateral::print_info() {
    Figure::print_info();

    std::cout << "(стороны: " << get_a() << ", " << get_b() << ", " << get_c() << ", " << get_d()
        << "; углы: " << get_A() << ", " << get_B() << ", " << get_C() << ", " << get_D() << ") создан\n";
}
