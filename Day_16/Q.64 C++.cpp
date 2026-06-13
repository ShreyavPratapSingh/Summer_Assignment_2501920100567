#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter bounds: ";
    cin >> n;
    
    cout << "Enter sorted/unsorted numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // logic to remove duplicate values
    int currentSize = n;
    for (int i = 0; i < currentSize; i++) {
        for (int j = i + 1; j < currentSize; ) {
            if (arr[i] == arr[j]) {
                // shift elements left
                for (int k = j; k < currentSize - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                currentSize--; // decrease active logical bounds
            } else {
                j++;
            }
        }
    }
    
    cout << "Reduced Unique Array: ";
    for (int i = 0; i < currentSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}