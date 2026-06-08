#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1; // using long long for larger numbers
    cout << "Enter a number: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Factorial of negative numbers isn't possible!" << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }
        cout << "Factorial of " << n << " is: " << fact << endl;
    }
    return 0;
}
