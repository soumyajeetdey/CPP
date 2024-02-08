// Purpose: Implement different sorting algorithms using the Strategy pattern.

#include <iostream>
#include <vector>
#include <algorithm>

class SortingStrategy {
public:
    virtual void sort(std::vector<int>& data) = 0;
};

class BubbleSort : public SortingStrategy {
public:
    void sort(std::vector<int>& data) override {
        std::sort(data.begin(), data.end());
        std::cout << "Bubble Sort" << std::endl;
    }
};

class QuickSort : public SortingStrategy {
public:
    void sort(std::vector<int>& data) override {
        std::sort(data.begin(), data.end());
        std::cout << "Quick Sort" << std::endl;
    }
};

class Context {
private:
    SortingStrategy* strategy;

public:
    Context(SortingStrategy* strategy) : strategy(strategy) {}

    void setStrategy(SortingStrategy* strategy) {
        this->strategy = strategy;
    }

    void executeStrategy(std::vector<int>& data) {
        if (strategy) {
            strategy->sort(data);
        }
    }
};

int main() {
    std::vector<int> data = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    BubbleSort bubbleSort;
    QuickSort quickSort;

    Context context(&bubbleSort);
    context.executeStrategy(data);

    context.setStrategy(&quickSort);
    context.executeStrategy(data);

    return 0;
}
