#include <iostream>
using namespace std;

double square_root(double n) {
    if (n < 0) {
        return -1; // Return -1 if the input is negative
    }
    
    double x = n; // Initial guess
    
    for (int i = 0; i < 10; i++) { // Repeat 10 times
        x = (x + n / x) / 2; // Update the guess
    }
    
    return x; // Return the square root
}

int main() {
    double n = 25;
    double root = square_root(n);
    cout << "The square root of " << n << " is: " << root << endl;
    return 0;
}
