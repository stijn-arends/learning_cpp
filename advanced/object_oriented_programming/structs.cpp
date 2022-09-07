#include <iostream>
#include <string>


/* 
by default things inside a struct are public.
You can change that by using the key private.

However, this is not normally done in structs.
*/
struct User{
    std::string first_name;
    std::string last_name;
    std::string get_status(){
        return status;
    }
    int age;
    private:
        std::string status = "Nothing";
};

int main(){

    User user;
    user.first_name = "Stijn";
    user.last_name = "Arends";
    user.age = 22;
    // This can't be done:   user.status = "learning c++";

    std::cout << user.get_status();



    return 0;
}