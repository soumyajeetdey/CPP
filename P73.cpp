// Program to implement RAII using exception handling

#include <iostream>
#include <fstream>
#include <stdexcept>

class File {
private:
    std::ofstream file;

public:
    File(const std::string& filename) {
        file.open(filename);
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file");
        }
    }

    ~File() {
        if (file.is_open()) {
            file.close();
        }
    }

    void write(const std::string& data) {
        file << data;
    }
};

int main() {
    try {
        File outputFile("output.txt");
        outputFile.write("Hello, RAII!");
    } catch (const std::exception& e) {
        std::cerr << "Exception occurred: " << e.what() << std::endl;
    }
    return 0;
}
