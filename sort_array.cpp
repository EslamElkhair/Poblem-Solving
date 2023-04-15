#include <iostream>
#include<vector>

using namespace std;


// {3,2,1}
vector<int> sortArray(vector<int> & vec) {  
    int n = vec.size();
    
    for (int i = 0; i < n; i++) {
        for(int j = i+1; j<n;++j )  {
            if(vec[i]>vec[j]) {
                
                //swap(vec[i], vec[j]);
                int temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
                
            }
            
            
        }
    }
    return vec;
}

int main() {
    
    vector<int> vec{3,2,1};
    
    vec = sortArray(vec);


    //printing 
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }


    return 0;
}
