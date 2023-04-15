
#include <iostream>

using namespace std;



void removeDuplicates(int arr[] , int & n ) {
    
    int index =0;

    
    for(int i=0;i<n;++i) {
  
        bool isDuplicated = false;
        
        for(int j = 0;j<index;++j) {
            if(arr[i] == arr[j]) {
                isDuplicated = true;
                break;
            }
        }
        
        if(!isDuplicated) 
            arr[index++] = arr[i] ;
    }
    n = index;
}





int main() {
    
    
    int arr[] = { 1, 2, 3, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    removeDuplicates(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
return 0;    
    
}
