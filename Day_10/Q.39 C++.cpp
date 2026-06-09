#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter height of pyramid: ";
    cin >> rows;
    
    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            cout << " ";
        }
        // increasing section
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // decreasing section
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
