int getMaximumMEX(vector<int> arr) {

    // Sort the array in non-decreasing order
sort(arr.begin(), arr.end());

// Reduce each element to the smallest integer not present in the array up to that point
set<int> present;
for (int i = 0; i < arr.size(); i++) {
    int x = 0;
    while (present.count(x) && x <= arr[i]) {
        x++;
    }
    present.insert(x);
}

// The MEX of the reduced array is the smallest integer not present in the set
int mex = 0;
while (present.count(mex)) {
    mex++;
}
mex = findMax(present);
return mex;

}
