#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout << "Enter size: ";
    cin >> n;
    
    cout << "Enter inputs: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int maxFreqElement = arr[0], maxCount = 0;
    for (int i = 0; i < n; i++) {
        int currentCount = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                currentCount++;
            }
        }
        if (currentCount > maxCount) {
            maxCount = currentCount;
            maxFreqElement = arr[i];
        }
    }
    
    cout << "Max frequency item: " << maxFreqElement << " (Count: " << maxCount << ")" << endl;
    return 0;
}