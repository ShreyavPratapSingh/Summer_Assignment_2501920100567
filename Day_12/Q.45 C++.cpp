#include <iostream>
using namespace std;

bool verifyPalindrome(int n) {
    int original = n, rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return original == rev;
}

int main() {
    int val;
    cout << "Enter number: ";
    cin >> val;
    if (verifyPalindrome(val)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}