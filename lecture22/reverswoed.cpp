#include <iostream>
#include <vector>
using namespace std;
//  
// Function to reverse a portion of the array (helper function)
void reverse(string &s, int start, int end) {
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}

// Function to reverse words in the string
string reverseWords(string s) {
    int n = s.size();
    
    // Step 1: Remove extra spaces
    int i = 0;
    int j = 0;

    // Remove leading spaces
    while (i < n && s[i] == ' ') i++;

    while (i < n) {
        // Add non-space character
        if (s[i] != ' ' || (j > 0 && s[j-1] != ' ')) {
            s[j++] = s[i];
        }
        i++;
    }
    
    // Remove trailing space
    if (j > 0 && s[j-1] == ' ') j--;

    s.resize(j); // Resize the string to remove any extra characters

    // Step 2: Reverse the entire string
    reverse(s, 0, s.size() - 1);
    
    // Step 3: Reverse each word in the string
    int start = 0;
    for (int end = 0; end <= s.size(); end++) {
        if (end == s.size() || s[end] == ' ') {
            reverse(s, start, end - 1); // Reverse each word
            start = end + 1;            // Move to the next word
        }
    }
    
    return s;
}

int main() {
    string s = "  the sky is blue  ";
    cout << "Original: \"" << s << "\"" << endl;
    
    string result = reverseWords(s);
    cout << "Reversed words: \"" << result << "\"" << endl;

    return 0;
}
