#include <iostream>
using namespace std;

bool checkPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int val;
    cout << "Enter integer: ";
    cin >> val;
    if (checkPrime(val)) {
        cout << val << " is a Prime Number." << endl;
    } else {
        cout << val << " is not a Prime Number." << endl;
    }
    return 0;
}
