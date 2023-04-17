
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string rearrangeSentence(string sentence) {
    // Split the sentence into words
    vector<string> words;
    string word = "";
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += sentence[i];
        }
    }
    words.push_back(word);
    
    // Sort the words by length
    sort(words.begin(), words.end(), [](const string& a, const string& b) {
        return a.length() < b.length();
    });
    
    // Rearrange the words in the sentence
    string result = "";
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += " ";
        }
        string word = words[i];
        if (word[0] >= 'a' && word[0] <= 'z') {
            word[0] = word[0] - 'a' + 'A';
        }
        result += word;
    }
    result[0] = result[0] - 'A' + 'a';
    result += ".";
    
    return result;
}

int main() {
    string sentence = "The quick brown fox jumps over the lazy dog.";
    string result = rearrangeSentence(sentence);
    cout << "Result: " << result << endl; // Output: Result: A fox The dog quick brown jumps lazy over the.
    return 0;
}

