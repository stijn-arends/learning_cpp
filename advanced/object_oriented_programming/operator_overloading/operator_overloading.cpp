#include <iostream>
#include <string>

/*
 Operator overloading is creating operator functions for 
 specific classes.

 Just like in python were we would modify the __add__,
 __equals__ or __str__ dunder methods.
*/

class Position{

    public:
        int x = 10;
        int y = 20;

        /*
        This is basically the __add__ method in python
        */
        Position operator + (Position pos){
            Position new_pos;
            new_pos.x = x +  pos.x;
            new_pos.y = y + pos.y;
            return new_pos;
        }

        /*
        This is basically the __equals__ dunnder method
        in python
        */
        bool operator == (Position pos){
            Position new_pos;
            if (pos.x == x && pos.y == y){
                return true;
            } 
            return false;
        }
};

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

// This is similar to the __str__ or __repr__ dunder methods in python
std::ostream & operator << (std::ostream & output, User user){
    output << "First name: " << user.first_name << "\nLast name: " <<
    user.last_name << "\n";
    return output;
}

std::istream & operator >> (std::istream & input, User & user){
    input >> user.first_name >> user.last_name;
    return input;
}


int main(){

    Position pos1, pos2;

    Position pos3 = pos1 + pos2;

    std::cout << pos3.x << " " << pos3.y << "\n";

    if (pos1 == pos3){
        std::cout << "They are the same :)\n";
    }else {std::cout << "They are not the same :(\n";} 

    // Lets test the << operator

    User user;
    user.first_name = "Stijn";
    user.last_name = "Arends";
    user.age = 22;
    user.set_status("Gold");

    // Now we can print the users name
    std::cout << user << "\n";

    // using standard in to create a new user:
    User stijn;
    std::cin >> stijn;

    std::cout << stijn << "\n"; 

    return 0;
}