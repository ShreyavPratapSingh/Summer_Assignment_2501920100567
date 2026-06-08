#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Enter the index of term: ";
    cin >> n;
    
    if (n == 1) {
        cout << "Fibonacci term at " << n << " is: " << t1 << endl;
    } else if (n == 2) {
        cout << "Fibonacci term at " << n << " is: " << t2 << endl;
    } else {
        for (int i = 3; i <= n; i++) {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        cout << "Fibonacci term at " << n << " is: " << nextTerm << endl;
    }
    return 0;
}
