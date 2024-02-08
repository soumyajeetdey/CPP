// Purpose: Implement logging in a C++ application.

#include <iostream>
#include <fstream>

void log(const std::string& message) {
    std::ofstream logfile("log.txt", std::ios::app);
    if (logfile.is_open()) {
        logfile << message << std::endl;
        logfile.close();
    } else {
        std::cerr << "Error opening log file!" << std::endl;
    }
}

int main() {
    log("Application started");

    // Application code...

    log("Application stopped");

    return 0;
}
