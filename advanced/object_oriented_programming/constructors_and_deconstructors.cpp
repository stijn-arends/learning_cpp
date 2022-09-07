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

        // This is the default constructor
        User(){
            std::cout <<"Constructor\n"; 
        }
        // This is the custom constructor
        User(std::string first_name, std::string last_name){

            this->first_name = first_name;
            this->last_name = last_name;
            // std::cout <<"Constructor\n"; 
        }

        ~User(){
            std::cout << "This is a destructor\n";
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


    // Create an instance of a user using a constructor
    User stijn("Stijn", "Arends");
    std::cout << stijn.first_name << " " << stijn.last_name << "\n";
    return 0;
}