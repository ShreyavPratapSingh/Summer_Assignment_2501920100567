#include <iostream>
using namespace std;

int main() {
    int arr[100], n, query, count = 0;
    cout << "Enter array size: ";
    cin >> n;
    
    cout << "Enter array numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter element to count: ";
    cin >> query;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == query) {
            count++;
        }
    }
    
    cout << "Frequency of " << query << " is: " << count << endl;
    return 0;
}