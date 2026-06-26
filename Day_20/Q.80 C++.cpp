#include <iostream>
using namespace std;

int main() {
    int mat[10][10], r, c;
    cout << "Enter row and col values: ";
    cin >> r >> c;
    
    cout << "Enter matrix numbers: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cin >> mat[i][j];
    }
    
    for (int j = 0; j < c; j++) {
        int cSum = 0;
        for (int i = 0; i < r; i++) {
            cSum += mat[i][j];
        }
        cout << "Column " << j + 1 << " sum = " << cSum << endl;
    }
    return 0;
}