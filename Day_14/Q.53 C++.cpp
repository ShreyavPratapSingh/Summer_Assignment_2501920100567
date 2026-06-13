#include <iostream>
using namespace std;

int main() {
    int arr[100], n, target, index = -1;
    cout << "Enter array size: ";
    cin >> n;
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter search target: ";
    cin >> target;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }
    
    if (index!= -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in array." << endl;
    }
    return 0;
}