// Program to serialize and deserialize an object to/from a file

#include <iostream>
#include <fstream>

class MyClass {
private:
    int data;

public:
    MyClass(int val) : data(val) {}

    int getData() const {
        return data;
    }
};

int main() {
    // Serialize object to file
    MyClass obj(42);
    std::ofstream outFile("object.dat", std::ios::binary);
    if (outFile.is_open()) {
        outFile.write(reinterpret_cast<const char*>(&obj), sizeof(obj));
        outFile.close();
    } else {
        std::cerr << "Unable to open file for writing!" << std::endl;
        return 1;
    }

    // Deserialize object from file
    MyClass newObj(0);
    std::ifstream inFile("object.dat", std::ios::binary);
    if (inFile.is_open()) {
        inFile.read(reinterpret_cast<char*>(&newObj), sizeof(newObj));
        std::cout << "Data read from file: " << newObj.getData() << std::endl;
        inFile.close();
    } else {
        std::cerr << "Unable to open file for reading!" << std::endl;
        return 1;
    }

    return 0;
}
