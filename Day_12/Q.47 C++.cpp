#include <iostream>
using namespace std;

void renderFibo(int termCount) {
    int first = 0, second = 1, next;
    for (int i = 0; i < termCount; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "Enter terms: ";
    cin >> terms;
    renderFibo(terms);
    return 0;
}
