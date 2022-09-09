#include "user.h"

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

        // getter
        int User::get_id(){
            return _id;
        }
        // setter
        void User::set_id(int id){
            this -> _id = id;
        }

        User::User(){
            // everytime a user is created we add to the user count
            User::user_count++; 
        }

        User::~User(){
            // Remove one user when you call the decostructor
            User::user_count--;
        }

int User::user_count = 0;


// This is similar to the __str__ or __repr__ dunder methods in python
std::ostream & operator << (std::ostream & output, const User& user){
    output << "First name: " << user.first_name << "\nLast name: " <<
    user.last_name << "\n" << 
    "Status: " << user._status << "\n";

    return output;
}

std::istream & operator >> (std::istream & input, User& user){
    input >> user.first_name >> user.last_name;
    return input;
}