#include <iostream>
using namespace std;

long long calcFact(int n) {
    long long ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter value: ";
    cin >> n;
    cout << "Factorial: " << calcFact(n) << endl;
    return 0;
}
