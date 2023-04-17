#include <iostream>

using namespace std;

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return i;
        }
    }
    return 1;
}

int main() {
    int n = 17;
    int result = isPrime(n);
    cout << "Result: " << result << endl; // Output: Result: 1
    n = 15;
    result = isPrime(n);
    cout << "Result: " << result << endl; // Output: Result: 3
    return 0;
}
