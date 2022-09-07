#include <iostream>
#include <string>
#include <vector>

/*
Learn about passed by reference and value.

By default everything is passed by value, which means that
if you change the variable inside the function then it won't be affected
elsewhere. The exception to this are arrays.

The other option is to pass by reference. We have to manually do this
by using the & operator(example below).
*/

void change_var(int x){
    /*
    Here we use pass by value
    */

    x = 18;
}

void change_var_pointer(int & x){
    /*
    Here we use pass by reference(or pointer). 
    This is achieved by using &.
    */ 

    x = 12;
}


void swap(int & a, int & b){

    int temp = a;
    a = b;
    b = temp;

    std::cout << "Value inside function swap: a = " << a << " b = " << b << "\n";

}

int main(){

    int x  = 5;
    std::cout << "Value before func call: " << x << "\n";
    change_var(x);
    std::cout << "Value after func call: " << x << "\n";

    std::cout << "Value before func call using pointer: " << x << "\n";
    change_var_pointer(x);
    std::cout << "Value after func call using pointer: " << x << "\n\n";

    /*
    Lets look at a swap variable example:
    */

    int a = 20;
    int b = 10;
        std::cout << "Value before function swap: a = " << a << " b = " << b << "\n";
    swap(a, b);

    std::cout << "Value after function swap: a = " << a << " b = " << b << "\n";
    return 0;
}