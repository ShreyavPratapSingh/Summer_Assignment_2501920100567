#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    
    originalNum = num;
    
    while (originalNum!= 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder; // power of 3 for 3 digit armstrong
        originalNum /= 10;
    }
    
    if (result == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}
