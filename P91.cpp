// Purpose: Implement a simple event system using the Observer pattern.

#include <iostream>
#include <vector>

class Observer {
public:
    virtual void onEvent() = 0;
};

class Subject {
private:
    std::vector<Observer*> observers;

public:
    void addObserver(Observer* observer) {
        observers.push_back(observer);
    }

    void notify() {
        for (Observer* observer : observers) {
            observer->onEvent();
        }
    }
};

class ConcreteObserver : public Observer {
public:
    void onEvent() override {
        std::cout << "Event occurred!" << std::endl;
    }
};

int main() {
    Subject subject;
    ConcreteObserver observer1, observer2;

    subject.addObserver(&observer1);
    subject.addObserver(&observer2);

    subject.notify();

    return 0;
}
