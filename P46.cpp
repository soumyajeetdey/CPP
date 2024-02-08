// Program to count the number of words in a text file

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    std::ifstream file("text.txt");
    if (file.is_open()) {
        std::string word;
        int count = 0;
        while (file >> word) {
            count++;
        }
        std::cout << "Number of words in the file: " << count << std::endl;
        file.close();
    } else {
        std::cerr << "Unable to open file!" << std::endl;
    }
    return 0;
}
