#include <iostream>
#include <vector>


using namespace std;

int max_difference(vector<int>& arr) {
    int n = arr.size();
    if (n < 2) {
        return -1;
    }
    int max_diff = -1;
    int min_val = arr[0];
    for (int i = 1; i < n; i++) {
        int diff = arr[i] - min_val;
        if (diff > 0 && diff > max_diff) {
            max_diff = diff;
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return max_diff;
}



int main() {
    vector<int> arr = {4, 3, 10, 2, 9, 1, 6};
    int max_diff = max_difference(arr);
    cout << max_diff << endl; // Output: 8
    return 0;
}
