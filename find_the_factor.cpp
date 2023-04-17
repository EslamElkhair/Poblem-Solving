#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long int getFactor(long int n, int p) {
    vector<long int> factors;
    for (long int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            if (n/i != i) {
                factors.push_back(n/i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    if (p > factors.size()) {
        return 0; // Error: p is larger than the number of factors
    }
    return factors[p-1];
}

int main() {
    long int n = 24;
    int p = 3;
    long int result = getFactor(n, p);
    cout << "Result: " << result << endl; // Output: Result: 8
    return 0;
}
