#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter limit: ";
    cin >> n;
    
    cout << "Enter array inputs: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int largest = -99999, secondLargest = -99999;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i]!= largest) {
            secondLargest = arr[i];
        }
    }
    
    cout << "Second Largest is: " << secondLargest << endl;
    return 0;
}