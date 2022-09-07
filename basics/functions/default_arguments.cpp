#include <iostream>
#include <vector>
#include <string>

// create custom data structure
struct Rectangle {
    double length;
    double width;
};

// for rectangle
double area(double length, double width){
    return length * width;
}

// for square
double area(double length){
    return length * length;
}

double pow(double base, int pow = 2){

    double total = 1;
    for (int i = 0; i < pow; i++){
        total *= base;
    }
    return total;
}


int main(){
    std::cout << pow(3, 2) << "\n";
    std::cout << pow(3) << "\n";

    // using overload for shapes -> rectangle and square
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;
    std::cout << area(rectangle.length, rectangle.width) << "\n";

    return 0;
}