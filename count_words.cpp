#include <iostream>
using namespace std;

int count_words(string paragraph) {
int counter = 0;

int added_word = false;

for(char c : paragraph) {
    if(c == ' ') {
        added_word = false;
    }
    else if(!added_word) {
        counter++;
        added_word =true;
    }
    
}
return counter;
}

int main () {

string paragraph = " ";
getline(cin, paragraph);


cout<< count_words(paragraph);




return 0;
}
