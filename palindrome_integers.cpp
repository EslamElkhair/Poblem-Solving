#include <iostream>
using namespace std;

bool is_palindrome(int arr[] , int n) {

for (int i =0;i<n/2;++i) {
    if(arr[i] != arr[n-i-1]) {
        return false;
    }
}

return true;
}

int main () {

int arr[] {1,2,3,2,1};
int n = sizeof(arr) / sizeof(arr[0]);

is_palindrome(arr,n);

if(is_palindrome) 
cout<<"YES";
else
cout<<"NO";

return 0;
}
