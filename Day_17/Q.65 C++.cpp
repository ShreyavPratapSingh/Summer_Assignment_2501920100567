#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], merged[200];
    int sizeA, sizeB;
    
    cout << "Enter size of 1st array: ";
    cin >> sizeA;
    cout << "Enter elements of 1st array: ";
    for (int i = 0; i < sizeA; i++) cin >> a[i];
    
    cout << "Enter size of 2nd array: ";
    cin >> sizeB;
    cout << "Enter elements of 2nd array: ";
    for (int i = 0; i < sizeB; i++) cin >> b[i];
    
    // perform merge
    for (int i = 0; i < sizeA; i++) {
        merged[i] = a[i];
    }
    for (int i = 0; i < sizeB; i++) {
        merged[sizeA + i] = b[i];
    }
    
    cout << "Merged Array is: ";
    for (int i = 0; i < sizeA + sizeB; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;
    return 0;
}