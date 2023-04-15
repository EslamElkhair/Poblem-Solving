#include <iostream>
#include <vector>
#include <cmath>
#include <limits.h>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    int limit = sqrt(num);
    for (int i = 2; i <= limit; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

vector<int> findMaxMinPrime(int arr[], int n) {
    int minPrime = INT_MAX;
    int maxPrime = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            if (arr[i] < minPrime) {
                minPrime = arr[i];
            }
            if (arr[i] > maxPrime) {
                maxPrime = arr[i];
            }
        }
    }
    vector<int> result;
    result.push_back(minPrime);
    result.push_back(maxPrime);
    return result;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> result = findMaxMinPrime(arr, n);

    cout << "Minimum prime number: " << result[0] << endl;
    cout << "Maximum prime number: " << result[1] << endl;

    return 0;
}
