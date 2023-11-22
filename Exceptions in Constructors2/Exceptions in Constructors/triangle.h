#pragma once
#include "Figure.h"
#include "shapeCreationError.h"

class Triangle : public Figure {
protected:
    int a_ = 0;
    int b_ = 0;
    int c_ = 0;
    int A_ = 0;
    int B_ = 0;
    int C_ = 0;
public:
    Triangle(int a, int b, int c, int A, int B, int C);
    int get_a();
    int get_b();
    int get_c();
    int get_A();
    int get_B();
    int get_C();
    void print_info() override;
};

