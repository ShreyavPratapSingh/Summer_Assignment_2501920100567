#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter bounds: ";
    cin >> n;
    
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    // sort logic (using basic bubble sort variant in reverse order)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    cout << "Descending Order array output: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}