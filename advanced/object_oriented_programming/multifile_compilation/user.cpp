#include <iostream>
#include <string>

#include "user.h"

/*
 Friend functions are functions that are outside of the class
 but can still acess the private variables of a class.

 You define the friend function inside the class but
 you fill it or create it outside of the class.

 Example below: output_id()
*/


        int User::get_user_count(){
            return User::user_count;
        }

        // getter
        std::string User::get_status(){
            return _status;
        }
        // setter
        void User::set_status(std::string status){
            if (status == "Gold" || status == "Silver"){
                this->_status = status;
            } else {this->_status = "No status";} 
        }

        User::User(){
            // everytime a user is created we add to the user count
            User::user_count++; 
        }

        User::~User(){
            // Remove one user when you call the decostructor
            User::user_count--;
        }

        // friend function: only define it
        void output_id(User user);

        // when we define this as a friend as well then we can access the private properties
        std::ostream & operator << (std::ostream & output, User user);
        std::istream & operator >> (std::istream & input, User user);


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