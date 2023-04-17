#include <vector>
#include <algorithm>

using namespace std;

int max_difference(vector<int>& arr) {
    int max_diff = -1;
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int diff = arr[i] - *min_element(arr.begin(), arr.begin() + i);
        if (diff > 0) {
            max_diff = max(max_diff, diff);
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
