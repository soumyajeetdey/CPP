// Program to handle multiple exceptions in a single catch block

#include <iostream>
#include <stdexcept>

int main() {
    try {
        // throw different exceptions
        throw std::runtime_error("Runtime error occurred!");
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught runtime error: " << e.what() << std::endl;
    } catch (const std::logic_error& e) {
        std::cerr << "Caught logic error: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Caught unknown exception." << std::endl;
    }
    return 0;
}
