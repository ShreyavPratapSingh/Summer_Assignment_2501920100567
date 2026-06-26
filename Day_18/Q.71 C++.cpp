#include <iostream>
using namespace std;

int main() {
    int arr[100], n, target;
    cout << "Enter bounds of sorted array: ";
    cin >> n;
    
    cout << "Enter elements (must be sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter element to search: ";
    cin >> target;
    
    int low = 0, high = n - 1, mid, targetIndex = -1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            targetIndex = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (targetIndex!= -1) {
        cout << "Element located at position index: " << targetIndex << endl;
    } else {
        cout << "Target element not present." << endl;
    }
    return 0;
}