#include <iostream>
using namespace std;

int main() { 
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    while (n > 0) {
        if (n % 2!= 0) {
            count++; // increment if the lowest bit is 1
        }
        n = n / 2;
    }
    
    cout << "Total set bits: " << count << endl;
    return 0;
}
