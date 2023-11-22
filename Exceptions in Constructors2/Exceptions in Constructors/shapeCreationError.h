#pragma once
#include <stdexcept>
#include <string>

class ShapeCreationError : public std::domain_error {
public:
    ShapeCreationError(const std::string& reason);
};
