// Program to demonstrate overloading the '+' operator for matrix addition

#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;

public:
    Matrix(std::vector<std::vector<int>> d) : data(d) {}

    Matrix operator+(const Matrix& other) {
        std::vector<std::vector<int>> result;

        for (size_t i = 0; i < data.size(); ++i) {
            std::vector<int> row;
            for (size_t j = 0; j < data[i].size(); ++j) {
                row.push_back(data[i][j] + other.data[i][j]);
            }
            result.push_back(row);
        }

        return Matrix(result);
    }

    void display() {
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < data[i].size(); ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    std::vector<std::vector<int>> data1 = {{1, 2}, {3, 4}};
    std::vector<std::vector<int>> data2 = {{5, 6}, {7, 8}};

    Matrix matrix1(data1);
    Matrix matrix2(data2);

    Matrix sum = matrix1 + matrix2;
    sum.display();

    return 0;
}
