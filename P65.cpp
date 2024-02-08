// Program to use vectors to implement a simple database

#include <iostream>
#include <vector>
#include <string>

struct Record {
    int id;
    std::string name;
    int age;

    Record(int _id, const std::string& _name, int _age) : id(_id), name(_name), age(_age) {}
};

class Database {
private:
    std::vector<Record> records;

public:
    void addRecord(int id, const std::string& name, int age) {
        records.push_back(Record(id, name, age));
    }

    void displayRecords() {
        for (const auto& record : records) {
            std::cout << "ID: " << record.id << ", Name: " << record.name << ", Age: " << record.age << std::endl;
        }
    }
};

int main() {
    Database db;
    db.addRecord(1, "John", 30);
    db.addRecord(2, "Alice", 25);
    db.addRecord(3, "Bob", 35);

    db.displayRecords();

    return 0;
}
