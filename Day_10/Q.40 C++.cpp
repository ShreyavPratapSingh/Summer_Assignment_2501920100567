#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter rows: ";
    cin >> rows;
    
    for (int i = 1; i <= rows; i++) {
        // spacing
        for (int space = 1; space <= rows - i; space++) {
            cout << " ";
        }
        // print left part
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        // adjust to print right descending character pattern
        ch -= 2;
        for (int j = 1; j < i; j++) {
            cout << ch;
            ch--;
        }
        cout << endl;
    }
    return 0;
}