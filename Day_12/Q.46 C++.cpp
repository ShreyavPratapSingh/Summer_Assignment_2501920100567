#include <iostream>
using namespace std;

bool verifyArmstrong(int n) {
    int original = n, sum = 0, remainder;
    while (n > 0) {
        remainder = n % 10;
        sum += remainder * remainder * remainder; // 3 digit default
        n /= 10;
    }
    return original == sum;
}

int main() {
    int val;
    cout << "Enter number: ";
    cin >> val;
    if (verifyArmstrong(val)) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not Armstrong Number" << endl;
    }
    return 0;
}
