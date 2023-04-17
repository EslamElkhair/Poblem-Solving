#include <iostream>
using namespace std;

int max_repeating (int arr[], int n) {

int max_num = -1;
int max_repeated = 0;

for(int i=0 ;i< n;++i) {
    int repeated = 1; 
    
    for(int j =i+1;j<n;++j) {
        
        if(arr[i] == arr[j]) 
            repeated++;
        
    }
    
    if(repeated >max_repeated) {
        max_repeated = repeated;
        max_num = arr[i];
    }
}

return max_num;
}

int main () {

int arr[] {1,2,3,3,3,3,4,4,5};
int n = sizeof(arr) / sizeof(arr[0]);
cout<<max_repeating(arr,n);


return 0;
}
