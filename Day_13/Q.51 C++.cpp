#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter array limit: ";
    cin >> n;
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int maxVal = arr[0], minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }
    
    cout << "Largest element: " << maxVal << endl;
    cout << "Smallest element: " << minVal << endl;
    return 0;
}
