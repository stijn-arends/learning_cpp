#include "user.h"
#include "teacher.h"


void do_something(User & user){
    user.output();
}

int main(){

    User user;
    user.first_name = "Stijn";
    user.last_name = "Arends";
    user.age = 22;

    Teacher teacher;
    teacher.first_name = "Caleb";
    teacher.last_name = "Curry";
    teacher.age = 28;

    /*
    With polymorphisms we assign a base class (user) to be a subclass
    (teacher). This way we can let teachers behave as users. 
    For example if we have a function that only accepts users with 
    polymorpishms we can also pass teachers: 
    */
    User & u1 = teacher;
    do_something(user);
    do_something(u1);

    return 0;
}