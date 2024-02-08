// Program to implement a queue using the queue container from the STL

#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    while (!q.empty()) {
        std::cout << "Front element: " << q.front() << std::endl;
        q.pop();
    }

    return 0;
}
