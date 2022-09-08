
#ifndef USER_H
#define USER_H

#include <iostream>
#include <vector>

class User{
    static int user_count; // the static attribute
    std::string _status = "No status";

    public:
        static int get_user_count();

        std::string first_name;
        std::string last_name;
        int age;

        // getter
        std::string get_status();
        // setter
        void set_status(std::string status);

        virtual void output();
};

#endif