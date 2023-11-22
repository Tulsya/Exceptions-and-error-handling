#include "Figure.h"
#include <iostream>

std::string Figure::get_name() {
    return name_;
}

void Figure::print_info() {
    std::cout << "\n" << name_ << " ";
}
