#include <iostream>
using namespace std;

bool checkPerfectNumber(int val) {
    int sum = 0;
    for (int i = 1; i < val; i++) {
        if (val % i == 0) sum += i;
    }
    return sum == val;
}

int main() {
    int num;
    cout << "Enter integer: ";
    cin >> num;
    if (checkPerfectNumber(num)) {
        cout << "Perfect Number" << endl;
    } else {
        cout << "Not Perfect" << endl;
    }
    return 0;
}