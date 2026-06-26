#include <iostream>
using namespace std;

int main() {
    int mat[10][10], r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    
    cout << "Enter matrix entries: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cin >> mat[i][j];
    }
    
    for (int i = 0; i < r; i++) {
        int rSum = 0;
        for (int j = 0; j < c; j++) {
            rSum += mat[i][j];
        }
        cout << "Row " << i + 1 << " sum = " << rSum << endl;
    }
    return 0;
}