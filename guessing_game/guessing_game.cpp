#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <vector>

using namespace std;

void print_vector(std::vector<int> data){
    // cout << "Size of: " << sizeof(array) << endl;
    for (int i =0; i < data.size(); i++){
        cout << data[i] << "\t";
    }
    cout << "\n";
}

void save_score(std::vector<int> guesses){

    // Logic to store the best score to a file
    int score = guesses.size() + 1;
    std::ifstream in_file ("best_score.txt");
    
    // Check if it already exists
    if (!in_file.is_open()){
        std::ofstream out_file ("best_score.txt");
        out_file << score;
    } else {
        int best_score;
        in_file >> best_score;
        std::cout << "Best score: " << best_score;

        if (score < best_score){
            std::ofstream out_file ("best_score.txt");
            out_file << score;
            } 
    }
}


void play_game(){

    /*
     you can set a random number between a certain range
     using the modules. In this example you get a random number
     between 0 and 250.
     */
    int random = rand() % 251;
    cout << "Random number " << random << endl;
    cout << "Guess a number: ";

    // int guesses[250];
    std::vector<int> guesses;

    while (true){
        int guess;
        cin >> guess;
        if (guess == random){
            cout << "\nYou got it :)" << endl;
            break;
        } else if (abs(guess - random) < 10){
            cout << "You are close, you are +- 10 away from the answer" << endl;
            guesses.push_back(guess); 
        } else {
            cout << "Guess again" << endl;
            guesses.push_back(guess); 
        }
    }

    save_score(guesses);

    print_vector(guesses);
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