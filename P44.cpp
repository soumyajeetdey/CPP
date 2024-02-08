// Program to write data to a file and read it back

#include <iostream>
#include <fstream>

int main() {
    // Write data to a file
    std::ofstream outFile("data.txt");
    if (outFile.is_open()) {
        outFile << "Hello, world!" << std::endl;
        outFile.close();
    } else {
        std::cerr << "Unable to open file for writing!" << std::endl;
        return 1;
    }

    // Read data back from the file
    std::ifstream inFile("data.txt");
    if (inFile.is_open()) {
        std::string line;
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cerr << "Unable to open file for reading!" << std::endl;
        return 1;
    }

    return 0;
}
