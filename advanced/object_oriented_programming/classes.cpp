#include <iostream>
#include <string>
#include <vector>

/*
 With classes all data members are private by default.
*/
class User{
    std::string status = "Nothing";
    public:
        std::string first_name;
        std::string last_name;
        int age;

        std::string get_status(){
            return status;
        }


};

int add_new_users(std::vector<User> &users, User user){

    // for (User o_user: users){
    //     std::cout << o_user << "\t";
    // }
    for (int i=0; i < users.size(); i++){
        if (users[i].first_name == user.first_name &&
        users[i].last_name == user.last_name){
            return i;
        }
        
    }
    users.push_back(user);
    return 0;
}


int main(){

    User user;
    user.first_name = "Stijn";
    user.last_name = "Arends";
    user.age = 22;
    // This can't be done:   user.status = "learning c++";

    std::cout << user.get_status();

    std::vector<User> users;
    users.push_back(user);

    std::cout << "\n" << users[0].first_name << "\n";

    User caleb;
    caleb.first_name = "Caleb";
    caleb.last_name = "Curry";
    caleb.age = 28;
    add_new_users(users, caleb);

    std::cout << "Number of users: " << users.size() << ".\n";

    add_new_users(users, caleb);
    std::cout << "Number of users after adding another caleb: " << users.size() << ".\n";

    return 0;
}