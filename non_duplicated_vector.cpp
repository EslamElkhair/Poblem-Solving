#include <iostream>
#include <vector>

using namespace std;

vector<int> findNonDuplicated(int arr[], int n) {
    vector<int> result;
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
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    int arr[] = {2, 3, 1, 2, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> nonDuplicated = findNonDuplicated(arr, n);

  
    for (int i = 0; i < nonDuplicated.size(); i++) {
        cout << nonDuplicated[i] << " ";
    }
    cout << endl;

    return 0;
}
