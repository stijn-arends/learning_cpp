#include <iostream>
#include <string>

using namespace std;


void conditionals(){

    int age = 17;

    if (age < 13){
        cout << "You are not old enough young men/lady." << endl;
    } else if (age < 19){
         cout << "You are almost 19" << endl;
    } else {
         cout << "You are old enough :)" << endl;
    }

}


void guessing_game(){
    std::string answer = "Stijn";
    std::string guess;
    cout << "Guess my name: ";
    getline(std::cin, guess);

    int age = 22;
    int age_guess;
    cout << "Guess what is my age: ";
    cin >> age_guess;


    if ((guess == answer) && (age == age_guess)){
        cout << "Yea that is the correct answer" << endl;
    } else {
        cout << "Guess my name: ";
        getline(std::cin, guess);

        cout << "Guess what is my age: ";
        cin >> age_guess;   
    }

    /*
    Logical
    -------
    &&  and
    ||  or
    !   not

    comparison
    ----------
    ==  equals
    !=  not equals
    <   smaller then
    >   greater then
    <=  smaller or equal then
    >=  greater or equal then
    */
}


void switches(){

    int age;
    cout << "What is your age?: ";
    cin >> age;

    switch(age){
        case 13:
            cout << "Your age is 13 much wow.\n";
            break;
        case 14:
            cout << "You are 14 woweee.\n";
            break;
        default:
            cout << "You are neither 13 or 14.\n";
            break;
    }

    // Now using enums

    enum season{summer, spring, fall, winter};
    season now = winter;

    switch(now){
        case summer:
            cout << "It is summer\n";
            break;
        case winter:
            cout << "It is winter.\n";
            break;
        case fall:
            cout << "It is fall.\n";
            break;
        case spring:
            cout << "It is spring.\n";
            break;
    }
}


int main(){
    // conditionals();

    // guessing_game();

    switches();

    return 0;
}