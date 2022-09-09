#ifndef USER_H
#define USER_H

#include<iostream>
#include<string>

class User {
    static int user_count;
    std::string _status = "No status";
    int _id = 1290;

    public:
        static int get_user_count();

        std::string first_name;
        std::string last_name;
        int age;

        //getter
        std::string get_status();
        // setter
        void set_status(std::string status);

        //getter
        int get_id();
        // setter
        void set_id(int id);

        User();

        ~User();


        friend std::ostream & operator << (std::ostream& output, const User& user);
        friend std::istream & operator >> (std::istream& input, User& user);
};

// Do not define these global variables inside a header file.
// int User::user_count = 0;

std::ostream& operator<<(std::ostream& output, const User& user);
std::istream& operator>>(std::istream& input, User& user);

#endif /* End of HALLGATO_H */