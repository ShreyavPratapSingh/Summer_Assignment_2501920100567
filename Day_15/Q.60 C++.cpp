#include <iostream>
using namespace std;

int main() {
    int arr[100], n, writePtr = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i]!= 0) {
            arr[writePtr] = arr[i];
            writePtr++;
        }
    }
    
    while (writePtr < n) {
        arr[writePtr] = 0;
        writePtr++;
    }
    
    cout << "Processed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}