// Program to implement a producer-consumer problem using threads

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>

std::mutex mtx;
std::condition_variable cv;
std::queue<int> buffer;
const int bufferSize = 10;

void producer() {
    for (int i = 0; i < 20; ++i) {
        std::unique_lock<std::mutex> lck(mtx);
        while (buffer.size() >= bufferSize) {
            cv.wait(lck);
        }
        buffer.push(i);
        std::cout << "Produced: " << i << std::endl;
        cv.notify_all();
    }
}

void consumer() {
    for (int i = 0; i < 20; ++i) {
        std::unique_lock<std::mutex> lck(mtx);
        while (buffer.empty()) {
            cv.wait(lck);
        }
        int val = buffer.front();
        buffer.pop();
        std::cout << "Consumed: " << val << std::endl;
        cv.notify_all();
    }
}

int main() {
    std::thread producerThread(producer);
    std::thread consumerThread(consumer);

    producerThread.join();
    consumerThread.join();

    return 0;
}
