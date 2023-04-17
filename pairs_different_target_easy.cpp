#include <iostream>
#include <vector>


using namespace std;

int count_pairs(vector<int>& costs, int target) {
    int count = 0;
    for (int i = 0; i < costs.size(); i++) {
        for (int j = i + 1; j < costs.size(); j++) {
            int diff = costs[i] - costs[j];
            if (diff < 0) {
                diff = -diff;
            }
            if (diff == target) {
                count++;
            }
        }
    }
    return count;
}



int main() {
    vector<int> costs = {1, 3, 5, 7, 9};
    int target = 2;
    int num_pairs = count_pairs(costs, target);
    cout << num_pairs << endl; // Output: 4
    return 0;
}
