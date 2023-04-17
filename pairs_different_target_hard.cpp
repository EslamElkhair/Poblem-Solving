#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int count_pairs(vector<int>& costs, int target) {
    unordered_set<int> costs_set(costs.begin(), costs.end());
    int count = 0;
    for (int cost : costs) {
        if (costs_set.count(cost + target) || costs_set.count(cost - target)) {
            count++;
        }
    }
    return count / 2;
}

int main() {
    vector<int> costs = {1, 3, 5, 7, 9};
    int target = 2;
    int num_pairs = count_pairs(costs, target);
    cout << num_pairs << endl; // Output: 4
    return 0;
}
