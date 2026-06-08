#include <iostream>
using namespace std;

int reverseRec(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    return reverseRec(num / 10, rev * 10 + (num % 10));
}

int main() {
    int num;
    cout << "Enter integer: ";
    cin >> num;
    cout << "Reversed number: " << reverseRec(num, 0) << endl;
    return 0;
}