// #include <iostream>
// #include <string>

/*
 Friend functions are functions that are outside of the class
 but can still acess the private variables of a class.

 You define the friend function inside the class but
 you fill it or create it outside of the class.

 Example below: output_id()
*/

#ifndef USER_H
#define USER_H

class User{
    static int user_count; // the static attribute
    std::string _status = "No status";
    int _id = 1290;

    public:
        static int get_user_count();

        std::string first_name;
        std::string last_name;
        int age;

        // getter
        std::string get_status();
        // setter
        void set_status(std::string status);

        User();

        ~User();

        // friend function: only define it
        friend void output_id(User user);

        // when we define this as a friend as well then we can access the private properties
        friend std::ostream & operator << (std::ostream & output, User user);
        friend std::istream & operator >> (std::istream & input, User user);

};

void output_id(User user);

int User::user_count = 0;

// This is similar to the __str__ or __repr__ dunder methods in python
std::ostream & operator << (std::ostream & output, User user);

std::istream & operator >> (std::istream & input, User & user);
#endif