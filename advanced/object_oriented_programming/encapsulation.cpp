#include <iostream>
#include <string>
#include <vector>

/*
With encapsulation we 'hide' away some parts of the code
that the user does not need to know about and should not touch.
*/


class User{
    std::string _status = "No status";
    public:
        std::string first_name;
        std::string last_name;
        int age;

        // getter
        std::string get_status(){
            return _status;
        }
        // setter
        void set_status(std::string status){
            if (status == "Gold" || status == "Silver"){
                this->_status = status;
            } else {this->_status = "No status";} 
        }


};

// int add_new_users(std::vector<User> &users, User user){

//     // for (User o_user: users){
//     //     std::cout << o_user << "\t";
//     // }
//     for (int i=0; i < users.size(); i++){
//         if (users[i].first_name == user.first_name &&
//         users[i].last_name == user.last_name){
//             return i;
//         }
        
//     }
//     users.push_back(user);
//     return 0;
// }


int main(){

    User user;
    user.first_name = "Stijn";
    user.last_name = "Arends";
    user.age = 22;
    // This can't be done:   user.status = "learning c++";

    std::cout << user.get_status() << "\n";

    std::cout << "Change status to something invalid: \n";

    user.set_status("Just hanging out");
    std::cout << user.get_status() << "\n";

    std::cout << "Change status: \n";

    user.set_status("Gold"); 
    std::cout << user.get_status() << "\n";

    // std::vector<User> users;
    // users.push_back(user);

    // std::cout << "\n" << users[0].first_name << "\n";

    // User caleb;
    // caleb.first_name = "Caleb";
    // caleb.last_name = "Curry";
    // caleb.age = 28;
    // add_new_users(users, caleb);

    // std::cout << "Number of users: " << users.size() << ".\n";

    // add_new_users(users, caleb);
    // std::cout << "Number of users after adding another caleb: " << users.size() << ".\n";

    return 0;
}