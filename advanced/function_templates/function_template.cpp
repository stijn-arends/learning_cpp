#include <iostream>
#include <string>

/*
We can use function overloading to create functions for 
different data types as we can see below.

However, we can also create function templates which can be
used for mulitpl data types.
*/ 

// function overloading:
/* 
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
*/ 

// function template
template <typename T>
void func_templ_swap(T & a, T & b){

    T temp = a;
    a = b;
    b = temp;

    std::cout << "Value inside function swap: a = " << a << " b = " << b << "\n";

}

int main(){

    int a = 20;
    int b = 10;

    func_templ_swap(a, b);

    std::string first_name = "Stijn";
    std::string last_name = "Arends";

    func_templ_swap(first_name, last_name);

    std::cout << first_name << " " << last_name << "\n";

    return 0;
}