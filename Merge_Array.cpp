
#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeVectors(vector<int>& a, vector<int>& b) {
    vector<int> merged;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            merged.push_back(a[i++]);
        } else {
            merged.push_back(b[j++]);
        }
    }
    while (i < a.size()) {
        merged.push_back(a[i++]);
    }
    while (j < b.size()) {
        merged.push_back(b[j++]);
    }
    return merged;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> merged = mergeVectors(a, b);

    for (int i = 0; i < merged.size(); i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
