#include <iostream>
using namespace std;

int main() {
    int a[10][10], n;
    cout << "Enter dimension of square matrix: ";
    cin >> n;
    
    cout << "Enter elements of matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    bool symmetric = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j]!= a[j][i]) {
                symmetric = false;
                break;
            }
        }
    }
    
    if (symmetric) {
        cout << "The matrix is Symmetric." << endl;
    } else {
        cout << "The matrix is Not Symmetric." << endl;
    }
    return 0;
}