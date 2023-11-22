#include "Triangle.h"
#include <iostream>

Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
    name_ = "Треугольник";
    a_ = a;
    b_ = b;
    c_ = c;
    A_ = A;
    B_ = B;
    C_ = C;
    if (a!=0 && b!=0 && c!=0) sides_count = 3;
    if ((A + B + C) != 180) throw ShapeCreationError("сумма углов не равна 180");
    if (sides_count != 3) throw ShapeCreationError("количество сторон не равно 3");
}

int Triangle::get_a() {
    return a_;
}

int Triangle::get_b() {
    return b_;
}

int Triangle::get_c() {
    return c_;
}

int Triangle::get_A() {
    return A_;
}

int Triangle::get_B() {
    return B_;
}

int Triangle::get_C() {
    return C_;
}

void Triangle::print_info() {
    Figure::print_info();

    std::cout << "(стороны: " << get_a() << ", " << get_b() << ", " << get_c()
        << "; углы: " << get_A() << ", " << get_B() << ", " << get_C() << ") создан\n";
}