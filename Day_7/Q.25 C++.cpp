#include <iostream>
using namespace std;

int getFact(int n) {
    if (n <= 1) {
        return 1; // base condition
    }
    return n * getFact(n - 1);
}

int main() {
    int num;
    cout << "Enter integer: ";
    cin >> num;
    if (num < 0) {
        cout << "Factorial not defined for negative numbers." << endl;
    } else {
        cout << "Factorial (using Recursion): " << getFact(num) << endl;
    }
    return 0;
}
