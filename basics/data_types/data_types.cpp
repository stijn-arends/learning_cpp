#include <iostream>
#include <climits>

using std::cout;


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

int main(){
    // There are several data types in c++
    // integral_data_type();

    char_data_type();

}