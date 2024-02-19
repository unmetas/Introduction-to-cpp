#include <iostream>

using namespace std;

int main() {
    const double sales = 95000;
    const double stateTaxRate = .04;
    const double countyTaxRate = .02;
    double stateTax = sales * stateTaxRate; 
    double countyTax = sales * countyTaxRate; 
    double totalTax = stateTax + countyTax; 

    cout << "total sales = $" << sales << endl
         << "State Tax = $" << stateTax << endl
         << "County Tax = $" << countyTax << endl
         << "Total tax = $" << totalTax;

    return 0;
}
 
