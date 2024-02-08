/* Usage of auto keyword */ 

#include <iostream>

using namespace std;

int main() {
    auto productPrice = 49.99;
    auto interestRate = 9.567;
    auto fileSize = 90000L;
    auto letter = 'a';
    auto isCondValid = false;
    
    cout << "Product price =" << productPrice << endl 
         << "Interest Rate :" << interestRate << endl 
         << "File Size = " << fileSize << endl 
         << "Letter is: " << letter << endl;

    return 0;
}