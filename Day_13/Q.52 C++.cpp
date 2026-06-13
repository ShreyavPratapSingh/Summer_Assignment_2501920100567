#include <iostream>
using namespace std;

int main() {
    int arr[100], n, evenCount = 0, oddCount = 0;
    cout << "Enter size of array: ";
    cin >> n;
    
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    cout << "Even values: " << evenCount << endl;
    cout << "Odd values: " << oddCount << endl;
    return 0;
}
