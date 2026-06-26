#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], n1, n2;
    cout << "Enter limit n1 and n2: ";
    cin >> n1 >> n2;
    
    cout << "Input elements of array 1: ";
    for (int i = 0; i < n1; i++) cin >> a[i];
    
    cout << "Input elements of array 2: ";
    for (int i = 0; i < n2; i++) cin >> b[i];
    
    cout << "Common entries: ";
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }
    cout << endl;
    return 0;
}