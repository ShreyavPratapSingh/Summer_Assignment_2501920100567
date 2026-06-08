#include <iostream>
using namespace std;

int main() {
    int low, high;
    cout << "Enter lower and upper limit: ";
    cin >> low >> high;
    
    cout << "Prime numbers between " << low << " and " << high << " are: ";
    for (int i = low; i <= high; i++) {
        if (i <= 1) continue;
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
