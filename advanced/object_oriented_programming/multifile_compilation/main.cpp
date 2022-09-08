#include <iostream>
#include <string>

#include "user.h"



int main(){
    User user;
    std::cin >> user;

    // Now we can print the users name
    std::cout << user << "\n";

    return 0;
}