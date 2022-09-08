#include <iostream>
#include <string>
#include <vector>

/*
Static data members are associated to the class rather then the
object. 
*/


class User{
    static int user_count; // the static attribute
    std::string _status = "No status";

    public:
        static int get_user_count(){
            return user_count;
        }

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

        User(){
            // everytime a user is created we add to the user count
            user_count++; 
        }

        ~User(){
            // Remove one user when you call the decostructor
            user_count--;
        }
};

int User::user_count = 0;

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

    // Create second User
    User caleb;

    std::cout << "How many users are there? Answer: " << User::get_user_count() << "\n";

    // call deconstructor
    caleb.~User();
    std::cout << "How many users are there? Answer: " << User::get_user_count() << "\n";

    return 0;
}