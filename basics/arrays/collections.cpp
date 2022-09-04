#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <array>

using namespace std;


void arrays(){
    // This will be an array that can hold 20 items
    // int guesses[20];

    // You can also pre fill it
    int guesses[] = {10, 13, 54, 12, 12, 13};

    cout << "Guesses: " << guesses[3] << endl;

    // You can replace elements
    guesses[3] = 2;
    cout << "Guesses: " << guesses[3] << endl;

    int answers[20];

    // Set a single element
    answers[0] = 10;

    // Or do it in a for loop

    /* 
    Number of elementes in the array:
    The sifeof functions returns the number of bytes
    To get the actual number of elements we divide by the size of one
    element
    */ 
    int size = sizeof(guesses) / sizeof(guesses[0]);

    for (int i =0; i < size; i++){
        cout << guesses[i] << "\t";
    }
}


void print_array(int array[], int size){
    // cout << "Size of: " << sizeof(array) << endl;
    for (int i =0; i < size; i++){
        cout << array[i] << "\t";
    }
    
}

void arrays_and_functions(){

    int guesses[] = {12, 43, 23, 43, 23};
    cout << "Size of: " << sizeof(guesses) << endl;

    int size = sizeof(guesses) / sizeof(guesses[0]);

    // when you pass an array to a function it looses the info on how big it is so you can't use sizeof
    print_array(guesses, size);
}


void fill_aray_from_input(){

    const int SIZE = 100;
    int guesses[SIZE];
    int count = 0;

    for (int i =0; i < SIZE; i++){
        // cout << guesses[i] << "\t";
        if (cin >> guesses[i]){ // will evaluate to true if we supply a correct value (int)
            // input worked
            count++;
        }else {break;} // invalid character, e.g. q or t
    }

    print_array(guesses, count);
    cin.clear();
    // cin.ignore(1000, '\n'); // Remove the junk that was used to break the for loop
    // Remove all the characters
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


}

/* 
 Vectors: 
*/

void print_vector(std::vector<int> data){
    // ranged loop
    for (int i : data) {
        cout << i << "  ";
    }

    // or use normal loop
    // for (int i = 0; i < data.size(); i++){
    //     cout << data[i] << "  ";
    // }
    cout << "\n";
}

void vectors(){

    std::vector<int> items = {12, 13, 20, 33, 22};

    cout << items[1] << endl;

    // Add a value to the back:
    items.push_back(20);
    cout << items[items.size() - 1] << endl;

    // Use .size() to get the length of the vector

    // Remove one element from the back
    items.pop_back();
    cout << items[items.size() - 1] << endl;

    print_vector(items);
}

/*
 Standard Template Library(STL) array
*/

void print_stl_array(std::array<int, 20> data, int size){
    // ranged loop
    // for (int i : data) {
    //     cout << i << "  ";
    // }

    // or use normal loop
    for (int i = 0; i < size; i++){
        cout << data[i] << "  ";
    }
    cout << "\n";
}

void stl_array(){
    // So we manually difine the number of slots just like a normal array
    std::array<int, 20> data = {1, 2, 3};

    cout << data.size();

    print_stl_array(data, data.size());

}

void multidimensional_arrays(){

    int grades[][3] = {
            {8, 9, 10}, 
            {7, 6, 6}, 
            {5, 4, 8}};

    for (int r = 0; r < 3; r++){
        for (int c = 0; c < 3; c++){
            std::cout << grades[r][c] << "\t";
        }
        std::cout << "\n";
    }

    // or using a vector:
    std::vector<std::vector<int>> grades2 = {
        {9, 8, 7},
        {8, 7, 5},
        {9, 9, 6}};

    // std::cout << grades2.size();
    // std::cout << grades2[0].size();

    for (std::vector<int> row : grades2){
        for (int column: row){
            cout << column << " ";
        }
        cout << "\n";
    }
}

int main(){


    //arrays();

    // arrays_and_functions();

    // fill_aray_from_input();

    // vectors();

    // stl_array();

    multidimensional_arrays();

    return 0;
}