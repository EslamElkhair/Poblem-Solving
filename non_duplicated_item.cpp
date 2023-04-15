#include <iostream>
#include <vector>

using namespace std;

int findNonDuplicated(int arr[], int n) {
    int result;
    bool isDuplicated;
    for (int i = 0; i < n; i++) {
        isDuplicated = false;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isDuplicated = true;
                break;
            }
        }
        if (!isDuplicated) {
            result = arr[i];
            break;
        }
    }
    return result;
}

int main() {
    
    int arr[] = { 9, 4, 9, 6, 7, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findNonDuplicated(arr, n);
    return 0;
}
