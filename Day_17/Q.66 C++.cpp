#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], sizeA, sizeB;
    cout << "Enter sizes of first and second array: ";
    cin >> sizeA >> sizeB;
    
    cout << "Enter first array: ";
    for (int i = 0; i < sizeA; i++) cin >> a[i];
    
    cout << "Enter second array: ";
    for (int i = 0; i < sizeB; i++) cin >> b[i];
    
    cout << "Union of both arrays: ";
    // Print all from first array
    for (int i = 0; i < sizeA; i++) {
        cout << a[i] << " ";
    }
    
    // Print from second array if not present in first
    for (int j = 0; j < sizeB; j++) {
        bool duplicate = false;
        for (int i = 0; i < sizeA; i++) {
            if (b[j] == a[i]) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) {
            cout << b[j] << " ";
        }
    }
    cout << endl;
    return 0;
}