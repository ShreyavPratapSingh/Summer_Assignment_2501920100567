#include <iostream>
using namespace std;

int main() {
    long long n;
    int count = 0;
    cout << "Enter any integer: ";
    cin >> n;
    
    // handling negative input
    if (n < 0) {
        n = -n;
    }
    
    if (n == 0) {
        count = 1;
    } else {
        while (n > 0) {
            count++;
            n = n / 10; // removing last digit
        }
    }
    
    cout << "Number of digits: " << count << endl;
    return 0;
}
