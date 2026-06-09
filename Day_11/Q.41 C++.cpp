#include <iostream>
using namespace std;

int findSum(int x, int y) {
    return x + y;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum: " << findSum(a, b) << endl;
    return 0;
}