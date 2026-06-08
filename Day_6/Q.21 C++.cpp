#include <iostream>
using namespace std;

int main() {
    int decimal, binary;
    int i = 0;
    cout << "Enter decimal number: ";
    cin >> decimal;
    
    if (decimal == 0) {
        cout << "Binary equivalent: 0" << endl;
        return 0;
    }
    
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    
    cout << "Binary equivalent: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;
    return 0;
}