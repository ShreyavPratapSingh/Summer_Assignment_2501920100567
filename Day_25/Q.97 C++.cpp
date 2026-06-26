#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], merged[200];
    int n1, n2;
    
    cout << "Enter sizes: ";
    cin >> n1 >> n2;
    
    cout << "Enter sorted array A: ";
    for (int i = 0; i < n1; i++) cin >> a[i];
    cout << "Enter sorted array B: ";
    for (int i = 0; i < n2; i++) cin >> b[i];
    
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }
    
    while (i < n1) merged[k++] = a[i++];
    while (j < n2) merged[k++] = b[j++];
    
    cout << "Merged Sorted Output: ";
    for (int idx = 0; idx < n1 + n2; idx++) {
        cout << merged[idx] << " ";
    }
    cout << endl;
    return 0;
}