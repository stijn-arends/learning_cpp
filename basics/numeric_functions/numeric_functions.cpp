#include <iostream>
#include <cmath>

using std::cout;

int main(){

    // Remainder get the remainder of a divetion
    cout << "Remainder 10 / 3.25: " << remainder(10, 3.25) << std::endl; // so there is 0.25 left when you put 3.25 3 times (9.75)
    cout << 10 % 3 << std::endl;

    // fmax gets the max number
    cout << "Max number: " << fmax(10, 3) << std::endl;

    // fmin is the same for the minimum
    cout << "Min number: " << fmin(10, 3) << std::endl;

    // sealing and floor round up or down after division
    cout << "Floor 10.0 / 3: " << floor(10.0 / 3) << std::endl;
    cout << "Seal 10.0 / 3: " << ceil(10.0 / 3) << std::endl;

    // round values

    cout << "Round 3.33: " << round(3.33) << std::endl;
}