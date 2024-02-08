// Program to implement a custom comparator for sorting a vector of custom objects

#include <iostream>
#include <vector>
#include <algorithm>

struct Person {
    std::string name;
    int age;

    Person(const std::string& _name, int _age) : name(_name), age(_age) {}
};

bool compareByAge(const Person& a, const Person& b) {
    return a.age < b.age;
}

int main() {
    std::vector<Person> people = {{"Alice", 25}, {"Bob", 30}, {"John", 20}};

    std::sort(people.begin(), people.end(), compareByAge);

    std::cout << "People sorted by age:" << std::endl;
    for (const auto& person : people) {
        std::cout << "Name: " << person.name << ", Age: " << person.age << std::endl;
    }

    return 0;
}
