#include <iostream>
#include <string>

using namespace std;


void for_loops(){

    // basic for loop:
    // for (int i = 0; i < 10; i++){
    //     cout << i << endl;
    // }

    // Example to calculate the factorial:
    int number = 5;
    int result = 1;

    for (int i = number; i > 0; i--){
        cout << i << endl;
        result *= i;
    }

    cout << "Fsctorial of " << number << " = " << result << endl;

}

void while_loops(){

    // Example to calculate the factorial: using a while loop
    int number = 5;
    int result = 1;
    int count = number;

    while (count > 0){
        result *= count;
        count--; // or use count -= 1
    }

    cout << "Fsctorial of " << number << " = " << result << endl;

}

void do_while_loops(){
    // you use a do while loop when you want to something to happend at least once

    std::string password = "hello123";
    std::string guess;


    do {
        cout << "Guess the password: ";
        cin >> guess;
        
    } while(guess != password);

    // You could also use a while loop for this

    // std::string password = "hello123";
    // std::string guess;

    // while(guess != password){
    //     cout << "Guess the password: ";
    //     cin >> guess;
    // }

}


void continue_and_break(){

    std::string sentence = "Hello my name is Stijn! How are you?";

    for (int i =0; i < sentence.length(); i++){

        if (sentence[i] == '!'){
            cout << "\nWe found an !";
            break;
        } else if (sentence[i] == ' '){
            continue;
        }
        cout << sentence[i];

    }
}


int main(){

    // for_loops();

    // while_loops();

    // do_while_loops();

    continue_and_break();
    return 0;
}