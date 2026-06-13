#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    cout << "Enter elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}