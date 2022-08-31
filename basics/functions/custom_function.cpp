#include <iostream>
#include <cmath>

using std::cout;

double divide(double, double);

int multiply(int x, int y)
{
    return x * y;

}

// A custom to the power function similar to the build in pow() function
double power(double base, int exponent)
{
    double result = 1;
    for(int i = 0; i < exponent; i++){
        result = result * base;
    }
    return result;

}

// A void function does not return anything

void print_power(double base, int exponent){
    double value = power(base, exponent);
    cout << base << "^" << exponent << " = " << value << std::endl;
}


int main()
{
    int x = 5;

    // custom function
    int multi = multiply(x, 2);
    cout << multi << std::endl;

    // build in function
    cout << pow(2, 2) << std::endl;
    
    cout << "Custom power function: 5^3 = " << power(5, 3) << std::endl;

    /* 
    You can also split the declaration and initizalization part of a function.
    You put the declaration at the top of the page and the initizalization at the bottom.
    For example the divide function:
        */

    cout << "Divide 5 - 3: " << divide(5, 3) << std::endl;

    print_power(8, 3);
    return 0;
}

double divide(double x, double y)
{
    return x - y;
}