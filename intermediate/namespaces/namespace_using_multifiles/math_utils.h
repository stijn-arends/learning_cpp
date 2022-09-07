#include <iostream>
#include <vector>
#include <string>

#ifndef MATH_UTILS
#define MATH_UTILS

namespace utils {
    // create custom data structure
    struct Rectangle {
        double length;
        double width;
    };

    // for rectangle
    double area(double length, double width);

    // for square
    double area(double length);

    // using Rectangle struct
    double area(Rectangle retangle);

    double pow(double base, int pow = 2);
}
#endif