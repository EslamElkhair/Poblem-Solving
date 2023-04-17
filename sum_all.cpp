#include <iostream>
#include <vector>

using namespace std;

int sumArray(vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    return sum;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int sum = sumArray(nums);
    cout << "Sum: " << sum << endl; // Output: Sum: 15
    return 0;
}
