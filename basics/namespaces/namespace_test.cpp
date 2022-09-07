#include <iostream>
#include <vector>
#include <string>

namespace utils {

    void print_vector(std::vector<int> data){
        // ranged loop
        for (int i : data) {
            std::cout << i << "  ";
        }

        // or use normal loop
        // for (int i = 0; i < data.size(); i++){
        //     cout << data[i] << "  ";
        // }
        std::cout << "\n";
    }
}

int main(){
    std::vector<int> numbers = {1, 6, 18};

    utils::print_vector(numbers);

    return 0;
}