#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


void play_game(){

    /*
     you can set a random number between a certain range
     using the modules. In this example you get a random number
     between 0 and 250.
     */
    int random = rand() % 251;
    cout << "Random number " << random << endl;
    cout << "Guess a number: ";

    while (true){
        int guess;
        cin >> guess;
        if (guess == random){
            cout << "\nYou got it :)" << endl;
            break;
        } else if (abs(guess - random) < 10){
            cout << "You are close, you are +- 10 away from the answer" << endl;
        } else {
            cout << "Guess again" << endl;
        }
    }


}


int guess(){

    /*
     We need to set this seed other wise we would always 
     get the same sequence of random numbers
    */
    srand(time(NULL));
    int choice;


    do {
        cout << "0. Quit\n1. Play Game" << endl;
        cin >> choice;
        switch (choice){
            case 0:
                cout << "Good bye :)";
                return 0;
            case 1:
                cout << "You chose to play the game." << endl;
                play_game();
                break;
        }
    } while (choice == 1);


    return 0;

}


int main(){

    guess();

    return 0;
}