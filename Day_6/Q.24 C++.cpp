#include <iostream>
using namespace std;

int main() {
    double base;
    int exponent;
    double result = 1.0;
    
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    
    int tempExp = (exponent < 0)? -exponent : exponent;
    
    for (int i = 1; i <= tempExp; i++) {
        result *= base;
    }
    
    if (exponent < 0) {
        result = 1.0 / result;
    }
    
    cout << "Result: " << result << endl;
    return 0;
}