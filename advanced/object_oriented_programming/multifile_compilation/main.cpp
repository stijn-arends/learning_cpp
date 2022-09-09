
#include "user.h"

int main(){
    User user;
    user.first_name = "Stijn";
    user.last_name = "Arends";
    user.age = 22;
    //std::cin >> user;

    // Now we can print the users name
    std::cout << user << "\n";
    std::cout << "User ID: " << user.get_id() << "\n";

    user.set_status("Gold");
    std::cout << "User status: " << user.get_status() << "\n";

    User user1, user2, user3, user4;
    std::cout << "User count: " << user.get_user_count();

    std::cout << "\n\nCreate a new user by suplying a first and last name:\n";
    std::cin >> user1;

    std::cout << user1;
}