// Program to implement a multithreaded program for parallel matrix multiplication

#include <iostream>
#include <vector>
#include <thread>

const int N = 3; // Matrix size

void multiply(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B, std::vector<std::vector<int>>& C, int startRow, int endRow) {
    for (int i = startRow; i < endRow; ++i) {
        for (int j = 0; j < N; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < N; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    std::vector<std::vector<int>> A = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::vector<std::vector<int>> B = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    std::vector<std::vector<int>> C(N, std::vector<int>(N));

    std::vector<std::thread> threads;

    int numThreads = 4; // Number of threads
    int rowsPerThread = N / numThreads;
    int remainingRows = N % numThreads;

    int startRow = 0;
    for (int i = 0; i < numThreads; ++i) {
        int numRows = rowsPerThread + (i < remainingRows ? 1 : 0);
        threads.emplace_back(multiply, std::cref(A), std::cref(B), std::ref(C), startRow, startRow + numRows);
        startRow += numRows;
    }

    for (auto& t : threads) {
        t.join();
    }

    // Display the result
    std::cout << "Result matrix:" << std::endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
