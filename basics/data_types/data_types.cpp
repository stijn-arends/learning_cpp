#include <iostream>
#include <climits>
#include <float.h>
#include <string>

using std::cout;

// To se a global constant
#define Z 10


void integral_data_type(){
    // The 4 main intergral types
    short a;
    int b;
    long c;
    long long d;

    // short <= int <= long <= long long
    cout << "The size of short: " << sizeof(short) << std::endl;
    cout << "The size of int: " << sizeof(int) << std::endl;
    cout << "The size of long: " << sizeof(long) << std::endl;
    cout << "The size of long long: " << sizeof(long long) << std::endl;
    /*
     These values are in bytes and 1 byte is 8 bits
     short: 2 bytes -> 16 bits
     int: 4 bytes -> 32 bits
     long: 4 bytes -> 32 bits
     long long: 8 bytes -> 64 bits
    */
    /*
     Each of these has an unsigned type

     Unsigned means that they only allow positive values
    */
    unsigned short e;
    unsigned int f;
    unsigned long g;
    unsigned long long h;
}


void char_data_type(){

    // A char is only 8 bits which means that it is smaller then a short
    char a = 'A'; // '' is used for char and "" is used for strings

    /* 
    you can turn characters into number and numbers also to characters
    This is done using the ASCII table
    */
    cout << "ASCII number for A = " << (int) a << std::endl;
}

void bool_data_types(){

    bool pizza_is_good = true;
    bool cale_is_bad = 1; // 1 equals true
    bool sprouts_are_good = 0; // 0 equals false
    
    // booleans can be used as flags
    bool found = false; // set to true when found

    // In order to print a boolean as true or false you need to use std::boolalpha
    cout << found << std::endl; // prints 0
    cout << std::boolalpha << found << std::endl; // prints false

}

void float_data_types(){

    float a = 10.0 / 3;
    a = a * 100000000000;
    double b = 7.7E4; // = 77000 or 7.7 x 10^4
    long double c;

    cout << std::fixed << a <<std::endl;
    // this displays how mnay digits a long double can display
    cout << LDBL_DIG << std::endl; 

    // You should normally use a double
}

void const_macro_enum(){

    // This is a constant and is read only we can't change the variable value
    const int x = 5;

    // enums are als constants
    enum {y = 100}; // can't change y

}

void string_data_type(){

    std::string greeting = "Hello";
    // concat
    std::string complete_greeting = greeting + " there";
    // append
    complete_greeting += "!";

    cout << complete_greeting << std::endl;
    cout << "Length of string: " << complete_greeting.length() << std::endl;
    // you could also use: complete_greeting.size()

    // method == member - function == functions attachted to objects

    // How to get user input for strings: (uncomment below three lines)
    // std::string user_in;
    // getline(std::cin, user_in);
    // cout << "This was the user input: " << user_in << std::endl;

    // String Modify Methods
    greeting.append(" there!"); // or greeting += " there!"

    // insert a char
    greeting.insert(3, "  ");
    cout << greeting << std::endl;

    // erase/remove characters
    greeting.erase(3, 2);
    cout << greeting << std::endl;

    // remove last char
    greeting.pop_back();
    cout << greeting << std::endl;

    // replace part of the string: start, stop, replacement
    greeting.replace(0, 5, "oi mate");
    cout << greeting << std::endl;

    // substring
    cout << greeting.substr(5, 2) << std::endl;

    // Find first of, returns index
    cout << greeting.find_first_of("aeiou") << std::endl;

    // Compare strings
    std::string test = "test";
    if (test == "test") cout << "They are equal" << std::endl;
    // or you can use the .compare function, will return 0 if it is equal
    if (test.compare("test") == 0) cout << "They are equal" << std::endl;
}

void literals(){

    // automaticall gicv a data type
    auto x = 5U;
    cout << x << std::endl;

    /*
    Decimal, hexadecimal and octal
    */
    // Decimal:
    int number = 30;
    cout << number << std::endl;
    // hexadecimal:
    int number_hex = 0x30; // = 48
    cout << number_hex << std::endl;
    // octal
    int number_oct = 030; // = 24 (or 3*8)
    cout << number_oct << std::endl;

    // you can also print a decimal to hexadecimal
    cout << std::hex << 48 << std::endl;

}

int main(){
    // There are several data types in c++
    // integral_data_type();

    // char_data_type();

    // bool_data_types();

    // string_data_type();

    literals();

}