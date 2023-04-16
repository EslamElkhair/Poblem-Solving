#include <iostream>
#include<vector>
using namespace std;

vector<int> count_zeros_ones (int arr[], int n) {

int zeros_cnt = 0;
int ones_cnt =0;

for(int i =0 ; i<n;++i) {
    if(arr[i] == 0)
        zeros_cnt++;
    else if(arr[i]==1)
        ones_cnt++;
}

vector<int> result = {zeros_cnt,ones_cnt};
return result;
}

int main () {

int arr[] {0,1,1,0,0,1,0};
int n = sizeof(arr) / sizeof(arr[0]);

vector<int> v = count_zeros_ones(arr,n);


for(int i=0;i<v.size();++i) {
    cout<<v[i]<<" ";
}


return 0;
}
