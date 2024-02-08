/* Program to calculate post tax monthly earning of a departmental store where all numbers are known*/

#include <iostream>

using namespace std;

int main() {
    // Declare constants for tax rates
    const double STATE_TAX_RATE = 0.04;   // 4%
    const double COUNTY_TAX_RATE = 0.02;  // 2%

    // Declare variables
    double monthlySales = 95000.0;
    double stateTax, countyTax, postTaxIncome;

    // Calculate state tax and county tax
    stateTax = monthlySales * STATE_TAX_RATE;
    countyTax = monthlySales * COUNTY_TAX_RATE;

    // Calculate total income before tax
    double totalIncomeBeforeTax = monthlySales;

    // Calculate post-tax income
    postTaxIncome = totalIncomeBeforeTax - stateTax - countyTax;

    // Print results
    cout << "Total income before tax: $" << totalIncomeBeforeTax << endl;
    cout << "State tax: $" << stateTax << endl;
    cout << "County tax: $" << countyTax << endl;
    cout << "Post-tax income: $" << postTaxIncome << endl;

    return 0;
}