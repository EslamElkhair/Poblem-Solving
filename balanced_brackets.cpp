#include <iostream>
#include <cstring>
using namespace std;

bool is_balanced(string s) {
    int count = 0;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            count++;
        } else if (c == ')' || c == ']' || c == '}') {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    return count == 0;
}

int main() {
    string s;
    cout << "Enter a string of brackets: ";
    getline(cin, s);

    if (is_balanced(s)) {
        cout << "The string is balanced." << endl;
    } else {
        cout << "The string is not balanced." << endl;
    }

    return 0;
}
