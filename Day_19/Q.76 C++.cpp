#include <iostream>
using namespace std;

int main() {
    int matrix[10][10], n, primarySum = 0;
    cout << "Enter size of square matrix (N x N): ";
    cin >> n;
    
    cout << "Enter element values: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            if (i == j) {
                primarySum += matrix[i][j];
            }
        }
    }
    
    cout << "Primary diagonal sum is: " << primarySum << endl;
    return 0;
}