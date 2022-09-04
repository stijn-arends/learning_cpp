#include <iostream>
#include <fstream>
#include <vector>
#include <string>


void writing_to_file(){
    std::ofstream file;
    file.open("hello.txt", std::ios::app); // std::ios::app is used to append to a file and not overwrite content

    // or use: std::ofstream file ("hello.txt")

    // Check if file was created
    if (file.is_open()){std::cout << "File has been opned";}

    // Write something to this file:
    file << "Hello there!\n";

    std::vector<std::string> names;
    names.push_back("Stijn");
    names.push_back("Amy");
    names.push_back("Barny");

    for (std::string name : names){file << name << "\n";}

}

void reading_from_files(){
    std::ifstream file ("hello.txt");

    // you can also read an entire line like so:
    std::string line;
    getline(file, line);
    std::cout << "First line: " << line << "\n";

    // Read one at the time
    std::vector<std::string> names;

    // Read from the file
    std::string input;
    while (file >> input){
        names.push_back(input);

    }

    for (std::string name : names){std::cout << "Name: " << name << "\n";}


}

int main(){

    // writing_to_file();
    reading_from_files();

    return 0;
}