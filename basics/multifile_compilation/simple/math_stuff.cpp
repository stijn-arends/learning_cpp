#include <iostream>

// Include the header file "" means to search in current directory
#include "math_utils.h"

int main(){
    /* 
    compile these scripts by using: g++ math_stuff.cpp math_utls.cpp
    
    */ 
    std::cout << pow(3, 2) << "\n";
    std::cout << pow(3) << "\n";

    // using overload for shapes -> rectangle and square
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;
    std::cout << area(rectangle.length, rectangle.width) << "\n";
    return 0;
}