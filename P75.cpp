// Program to create a simple multithreaded program

#include <iostream>
#include <thread>

void threadFunction() {
    std::cout << "Hello from thread!" << std::endl;
}

int main() {
    std::thread t(threadFunction);
    t.join(); // Wait for the thread to finish
    std::cout << "Main thread exiting" << std::endl;
    return 0;
}
