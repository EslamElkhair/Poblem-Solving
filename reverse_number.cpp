#include <iostream>
using namespace std;

int revesre_number (int n) {

int reversed =0;

while(n!=0) {
    
    int digit = n %10; //1234 
    
    reversed = reversed *10 +digit;
    
    n/= 10;
}

return reversed;
}

int main () {

int n = 12345 ;

cout<<revesre_number(n);

return 0;
}
