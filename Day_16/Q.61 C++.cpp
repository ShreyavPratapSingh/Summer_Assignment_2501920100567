#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter count of elements currently present: ";
    cin >> n;
    
    cout << "Enter sequence values: ";
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        actualSum += arr[i];
    }
    
    // total theoretical sum up to n+1 numbers
    int targetN = n + 1;
    int expectedSum = (targetN * (targetN + 1)) / 2;
    
    cout << "Missing number: " << expectedSum - actualSum << endl;
    return 0;
}