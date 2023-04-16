#include <iostream>
using namespace std;

bool is_palindrome(string s) {

int n = s.length();

for(int i = 0 ; i<n/2 ; ++i) {
    if(s[i] != s[n-i-1]) 
        return false;
}

return true;
}

int main () {

string s;
getline(cin,s);

if(is_palindrome(s))
    cout<<"YES";
else 
    cout<<"NO";



return 0;
}
