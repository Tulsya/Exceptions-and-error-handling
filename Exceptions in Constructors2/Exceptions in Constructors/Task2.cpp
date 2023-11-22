#include <iostream>
#include "square.h"
#include "rhombus.h"
#include "equilateralTriangle.h"
#include "rightTriangle.h"
#include "isoscelesTriangle.h"
#include "shapeCreationError.h"
#include <vector>

int main()
{
    system("chcp 1251");

    try {
        Triangle tri(0, 20, 30, 40, 70, 70);
        tri.print_info();
    }
    catch (const ShapeCreationError& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        EquilateralTriangle equilateral_triangle(30, 30, 30, 60, 50, 60);
        equilateral_triangle.print_info();
    }
    catch (const ShapeCreationError& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        RightTriangle right_triangle(10, 20, 30, 45, 45, 90);
        right_triangle.print_info();
    }
    catch (const ShapeCreationError& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        IsoscelesTriangle isosceles_triangle(10, 20, 20, 50, 60, 70);
        isosceles_triangle.print_info();
    }
    catch (const ShapeCreationError& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
        quadrilateral.print_info();
    }
    catch (const ShapeCreationError& e) {
        std::cerr << e.what() << std::endl;
    }
    
    try {
        Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
        rectangle.print_info();
    }
    catch (const ShapeCreationError& e) {
        std::cerr << e.what() << std::endl;
    }
    
    try {
        Square square(20, 20, 20, 20, 90, 90, 90, 90);
        square.print_info();
    }
    catch (const ShapeCreationError& e) {
        std::cerr << e.what() << std::endl;
    }
    
    try {
        Parallelogram parallelogram(20, 30, 20, 30, 30, 150, 30, 150);
        parallelogram.print_info();
    }
    catch (const ShapeCreationError& e) {
        std::cerr << e.what() << std::endl;
    }
    
    try {
        Rhombus rhomb(30, 30, 30, 30, 30, 150, 30, 150);
        rhomb.print_info();
    }
    catch (const ShapeCreationError& e) {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
