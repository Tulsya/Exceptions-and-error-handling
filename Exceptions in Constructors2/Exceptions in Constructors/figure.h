#pragma once
#include <string>

class Figure {
protected:
    std::string name_;
    bool checked = false;
    int sides_count = 0;
public:
    std::string get_name();
    virtual void print_info();
};
#pragma once
