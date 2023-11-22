#pragma once
#include "Figure.h"
#include "shapeCreationError.h"

class Quadrilateral : public Figure {
protected:
    int a_ = 0;
    int b_ = 0;
    int c_ = 0;
    int d_ = 0;
    int A_ = 0;
    int B_ = 0;
    int C_ = 0;
    int D_ = 0;
public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
    int get_a();
    int get_b();
    int get_c();
    int get_d();
    int get_A();
    int get_B();
    int get_C();
    int get_D();
    void print_info() override;
};