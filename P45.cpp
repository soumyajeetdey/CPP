// Program to copy the contents of one file to another

#include <iostream>
#include <fstream>

int main() {
    std::ifstream sourceFile("source.txt");
    std::ofstream destFile("destination.txt");

    if (sourceFile.is_open() && destFile.is_open()) {
        std::string line;
        while (std::getline(sourceFile, line)) {
            destFile << line << std::endl;
        }
        std::cout << "File copied successfully!" << std::endl;
        sourceFile.close();
        destFile.close();
    } else {
        std::cerr << "Unable to open files!" << std::endl;
    }

    return 0;
}
