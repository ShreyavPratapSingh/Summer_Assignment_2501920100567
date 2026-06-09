#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter rows: ";
    cin >> rows;
    
    for (int i = rows; i >= 1; i--) {
        // spacing
        for (int space = 1; space <= rows - i; space++) {
            cout << " ";
        }
        // pattern
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
