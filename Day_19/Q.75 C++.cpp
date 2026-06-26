#include <iostream>
using namespace std;

int main() {
    int original[10][10], transposed[10][10], r, c;
    cout << "Enter rows and cols: ";
    cin >> r >> c;
    
    cout << "Enter elements: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cin >> original[i][j];
    }
    
    // swapping row with col indices
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            transposed[j][i] = original[i][j];
        }
    }
    
    cout << "Transposed Matrix output: " << endl;
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}