/* Program to generate 4 digit random number */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(0)); // from 01-Jan-1970
    int number = rand() % 10000;
    cout << "Random Number =" << number << endl; 
         
    return 0;
}