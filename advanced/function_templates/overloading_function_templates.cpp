#include <iostream>
#include <string>
#include <vector>

/*
-
*/ 

// function template
template <typename T>
void swap(T & a, T & b){

    T temp = a;
    a = b;
    b = temp;

    std::cout << "Value inside function swap: a = " << a << " b = " << b << "\n";

}

template <typename T>
void swap(T a[], T b[], int size){

    for (int i=0; i < size; i++){
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void print_arrays(int a[], int b[], int size){

    for (int i=0; i < size; i++){
        std::cout << a[i] << " " << b[i] << "\t";
    }
    std::cout << "\n";

}

int main(){

    int a = 20;
    int b = 10;

    swap(a, b);

    std::string first_name = "Stijn";
    std::string last_name = "Arends";

    swap(first_name, last_name);

    std::cout << first_name << " " << last_name << "\n";

    int nines[] = {9, 9, 9, 9, 9, 9};
    int ones[] = {1, 1, 1, 1, 1, 1};

    int size = sizeof(nines) / sizeof(nines[0]);
    print_arrays(nines, ones, size);

    swap(nines, ones, size);
    std::cout << "After swap: \n";
    print_arrays(nines, ones, size);

    return 0;
}