#include <iostream>
using namespace std;

int main() {
    int low, high, temp, rem, sum;
    cout << "Enter range (lower limit and upper limit): ";
    cin >> low >> high;
    
    cout << "Armstrong numbers: ";
    for (int i = low; i <= high; i++) {
        temp = i;
        sum = 0;
        while (temp!= 0) {
            rem = temp % 10;
            sum += rem * rem * rem; // Assuming standard 3 digit processing
            temp /= 10;
        }
        if (sum == i) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
