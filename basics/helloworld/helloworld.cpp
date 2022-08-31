#include <iostream>

// install tutorial: https://code.visualstudio.com/docs/languages/cpp

// Different ways to 'import' cout
// using namespace std; // declerative 
using std::cout; 

int main()
{
    cout << "Hello World" << std::endl;

    int slices; // decleration
    slices = 5; // initialization
    // or: int slices = 5; 
    cout << "You have " << slices << " slices" << std::endl;

    // You can also use a printf statement:
    printf("%i\n", slices); // the first argument declares the type and puts an newline at the end

    // cout is used more often
    return 0;
}