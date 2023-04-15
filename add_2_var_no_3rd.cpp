#include <iostream>

using namespace std;

// x = 3 , y = 5

int add(int x , int y) {
    // 4 5 6 7 8 --> 8 
    for(int i = 1 ; i<=y;++i) 
        x++;
    
    return x;
}


int main()
{


   cout<< add(3,5);
    
    return 0;
}
