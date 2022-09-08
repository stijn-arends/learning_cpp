#include <iostream>
#include <string>

/*
 Friend functions are functions that are outside of the class
 but can still acess the private variables of a class.

 You define the friend function inside the class but
 you fill it or create it outside of the class.

 Example below: output_id()
*/

class User{
    static int user_count; // the static attribute
    std::string _status = "No status";
    int _id = 1290;

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

        // friend function: only define it
        friend void output_id(User user);

        // when we define this as a friend as well then we can access the private properties
        friend std::ostream & operator << (std::ostream & output, User user);

};

void output_id(User user){
    std::cout << user._id << "\n";
}

int User::user_count = 0;

// This is similar to the __str__ or __repr__ dunder methods in python
std::ostream & operator << (std::ostream & output, User user){
    output << "First name: " << user.first_name << "\nLast name: " <<
    user.last_name << "\n" << 
    "Status: " << user._status << "\n";

    return output;
}

std::istream & operator >> (std::istream & input, User & user){
    input >> user.first_name >> user.last_name;
    return input;
}


int main(){
    User user;
    user.first_name = "Stijn";
    user.last_name = "Arends";
    user.age = 22;
    user.set_status("Gold");

    // Now we can print the users name
    std::cout << user << "\n";

    output_id(user);

    return 0;
}