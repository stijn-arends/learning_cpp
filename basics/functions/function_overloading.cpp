#include <iostream>
#include <vector>
#include <string>

/*
    With function overloading we create two functions with the 
    same name, but with different parameters. Now we can call the
    function and based on the parameters that were given it chooses
    which one to run.
*/

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

void swap(int & a, int & b){

    int temp = a;
    a = b;
    b = temp;

    std::cout << "Value inside function swap: a = " << a << " b = " << b << "\n";
}

void swap(std::string & a, std::string &  b){

    std::string temp = a;
    a = b;
    b = temp;

    std::cout << "Value inside function swap: first name = " << a << " last name = " << b << "\n";
}


int main(){

    int a = 20;
    int b = 10;

    swap(a, b);

    std::string first_name = "Stijn";
    std::string last_name = "Arends";

    swap(first_name, last_name);

    std::cout << first_name << " " << last_name << "\n";

    // using overload for shapes -> rectangle and square
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;
    std::cout << area(rectangle.length, rectangle.width) << "\n";

    return 0;
}