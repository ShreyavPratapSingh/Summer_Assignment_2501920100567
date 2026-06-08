#include <iostream>
using namespace std;

int main() {
    int n, product = 1, digit;
    cout << "Enter a number: ";
    cin >> n;
    
    if (n == 0) {
        product = 0;
    } else {
        while (n > 0) {
            digit = n % 10;
            product = product * digit;
            n = n / 10;
        }
    }
    
    cout << "Product of digits is: " << product << endl;
    return 0;
}
