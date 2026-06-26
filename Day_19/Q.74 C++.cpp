#include <iostream>
using namespace std;

int main() {
    int mat1[10][10], mat2[10][10], difference[10][10];
    int r, c;
    cout << "Enter row and column limits: ";
    cin >> r >> c;
    
    cout << "Enter matrix 1: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cin >> mat1[i][j];
    }
    
    cout << "Enter matrix 2: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cin >> mat2[i][j];
    }
    
    cout << "Subtracted Resulting Matrix: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            difference[i][j] = mat1[i][j] - mat2[i][j];
            cout << difference[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}