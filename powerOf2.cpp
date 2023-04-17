vector<int> isPower(vector<int> nums) {
vector<int> result;
for (int num : nums) {
bool powerOf2 = true;
if(num == 0) {
powerOf2 = true;
}
while (num >1) {
if (num % 2 == 1) {
powerOf2 = false;
break;
}
num /= 2;
}
result.push_back(powerOf2 ? 1 : 0);
}
return result;

}

int main() {
    vector<int> nums = {3, 4, 5, 8, 16};
    vector<int> result = isPowerOf2(nums);
    cout << "Result: ";
    for (int r : result) {
        cout << r << " ";
    }
    cout << endl; // Output: 0 1 0 1 1
    return 0;
}
