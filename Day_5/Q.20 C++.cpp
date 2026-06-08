#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;
    
    long long maxPrime = -1;
    
    // check and divide by 2
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }
    
    // check for odd numbers
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    
    // if n is prime greater than 2
    if (n > 2) {
        maxPrime = n;
    }
    
    cout << "Largest prime factor is: " << maxPrime << endl;
    return 0;
}
