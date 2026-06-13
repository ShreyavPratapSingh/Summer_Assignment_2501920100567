#include <iostream>
using namespace std;

int main() {
    int arr[100], n, targetSum;
    cout << "Enter array limits: ";
    cin >> n;
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter target sum value: ";
    cin >> targetSum;
    
    cout << "Matching pairs: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == targetSum) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }
    return 0;
}