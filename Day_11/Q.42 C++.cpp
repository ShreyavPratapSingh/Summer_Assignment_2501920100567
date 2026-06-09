#include <iostream>
using namespace std;

int getMax(int x, int y) {
    if (x > y) return x;
    return y;
}

int main() {
    int a, b;
    cout << "Enter two values: ";
    cin >> a >> b;
    cout << "Max: " << getMax(a, b) << endl;
    return 0;
}
