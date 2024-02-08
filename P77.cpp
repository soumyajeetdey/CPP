// Program to use condition variables to synchronize threads

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void printId(int id) {
    std::unique_lock<std::mutex> lck(mtx);
    while (!ready) {
        cv.wait(lck);
    }
    std::cout << "Thread " << id << " is executing" << std::endl;
}

void go() {
    std::unique_lock<std::mutex> lck(mtx);
    ready = true;
    cv.notify_all();
}

int main() {
    std::thread threads[5];
    for (int i = 0; i < 5; ++i) {
        threads[i] = std::thread(printId, i + 1);
    }

    std::cout << "Threads are ready to execute..." << std::endl;
    go();

    for (auto& t : threads) {
        t.join();
    }

    return 0;
}
