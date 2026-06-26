#include <iostream>
using namespace std;

int main() {
    int mat1[10][10], mat2[10][10], sum[10][10];
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    
    cout << "Enter matrix 1 values: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cin >> mat1[i][j];
    }
    
    cout << "Enter matrix 2 values: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cin >> mat2[i][j];
    }
    
    cout << "Summed Matrix: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}