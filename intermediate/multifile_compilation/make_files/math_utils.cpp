#include <iostream>
#include <vector>
#include <string>

// Include the header file "" means to search in current directory
#include "math_utils.h"

// for rectangle
double area(double length, double width){
    return length * width;
}

// for square
double area(double length){
    return length * length;
}

double area(Rectangle rectangle){
    return rectangle.length * rectangle.width;
}

double pow(double base, int pow){

    double total = 1;
    for (int i = 0; i < pow; i++){
        total *= base;
    }
    return total;
}