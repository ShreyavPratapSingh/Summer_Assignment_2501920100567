#include <iostream>
using namespace std;

int main() {
    float basic, hra, da, gross;
    cout << "Enter basic monthly salary: ";
    cin >> basic;
    
    hra = 0.20 * basic; // 20% housing allowance
    da = 0.40 * basic;  // 40% dearness allowance
    gross = basic + hra + da;
    
    cout << "Salary Breakdown sheet: " << endl;
    cout << "HRA Allowance: " << hra << endl;
    cout << "DA Allowance: " << da << endl;
    cout << "Gross Calculated Salary: " << gross << endl;
    return 0;
}