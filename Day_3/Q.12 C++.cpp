#include <iostream>
using namespace std;

int main() {
    int n1, n2, maxNum;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    
    // LCM starts searching from the maximum of both numbers
    maxNum = (n1 > n2)? n1 : n2;
    
    while (true) {
        if (maxNum % n1 == 0 && maxNum % n2 == 0) {
            cout << "LCM of " << n1 << " and " << n2 << " is: " << maxNum << endl;
            break;
        }
        maxNum++;
    }
    return 0;
}
