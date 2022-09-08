#include <iostream>
#include <string>

#include "user.h"

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

        void User::output(){
            std::cout << "Yea user\n";
        }