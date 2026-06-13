#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter array bounds: ";
    cin >> n;
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Duplicate items identified: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break; // avoids multiple prints of same duplicate pair
            }
        }
    }
    cout << endl;
    return 0;
}
