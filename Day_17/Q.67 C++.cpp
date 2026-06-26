#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], sizeA, sizeB;
    cout << "Enter limits (sizeA and sizeB): ";
    cin >> sizeA >> sizeB;
    
    cout << "Array A: ";
    for (int i = 0; i < sizeA; i++) cin >> a[i];
    cout << "Array B: ";
    for (int i = 0; i < sizeB; i++) cin >> b[i];
    
    cout << "Intersection Elements: ";
    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break; // print once per matching pair
            }
        }
    }
    cout << endl;
    return 0;
}