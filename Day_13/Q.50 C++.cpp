#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    float sum = 0;
    cout << "Enter array limit: ";
    cin >> n;
    
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    cout << "Sum: " << sum << endl;
    cout << "Average: " << sum / n << endl;
    return 0;
}
