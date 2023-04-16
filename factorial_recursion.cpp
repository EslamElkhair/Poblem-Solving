int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    // Sample input:
    int n = 5;

    // Compute the factorial of n:
    int result = factorial(n);

    // Sample output:
    cout << "Factorial of " << n << " is " << result << endl;

    return 0;
}
