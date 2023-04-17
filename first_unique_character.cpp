
int first_unique_char(string s) {
    int n = s.length();
    vector<int> freq(26, 0);

    // Calculate frequency of each character
    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
    }

    // Find index of first unique character
    for (int i = 0; i < n; i++) {
        if (freq[s[i] - 'a'] == 1) {
            return i;
        }
    }

    return -1;
}

int main() {
    string s = "leetcode";

    // Find index of first unique character
    int index = first_unique_char(s);

    // Print output
    cout << index << endl;

    return 0;
}
