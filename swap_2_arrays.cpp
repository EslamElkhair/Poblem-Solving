#include <iostream>

using namespace std;

// x = 3 , y = 5

void swap(int x[] , int y[], int size) {
    
    for(int i= 0 ; i<size ;++i) {
        int temp = x[i];
        x[i] = y[i];
        y[i] = temp;
    }
    
}


int main()
{


   int arr1 [] {1,2,3};
   int arr2 [] {4,5,6};
   
   int size = sizeof(arr1) / sizeof(arr1[0]);
   
   
   swap(arr1,arr2,size);
   
   
   
  //printing 
      cout << "arr1 = ";
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "arr2 = ";
    for (int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }
   
    
    return 0;
}
