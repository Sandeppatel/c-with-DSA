
#include <iostream>
#include <vector>
using namespace std;

// Helper function to generate letter combinations
void letter(string digits, string output, int index, vector<string>& ans, string mapping[]) {
    if (index >= digits.length()) {
        ans.push_back(output); // Store the generated combination
        return;
    }

    int number = digits[index] - '0'; // Convert char digit to corresponding number
    string value = mapping[number];   // Get the mapped letters

    for (int i = 0; i < value.length(); i++) {
        output.push_back(value[i]); // Choose a letter
        letter(digits, output, index + 1, ans, mapping); // Recur for the next digit
        output.pop_back();           // Backtrack to try other letters
    }
}

// Function to map digits to letters and generate combinations
vector<string> mapLetter(string digits) {
    vector<string> ans;
    if (digits.length() == 0) {
        return ans; // Return an empty result if no digits
    }

    string output = "";
    int index = 0;
    // Mapping of digits to corresponding letters on a phone keypad
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    // Call the recursive helper function
    letter(digits, output, index, ans, mapping);

    return ans;
}

int main() {
    string digits = "23";

    // Get all the possible letter combinations
    vector<string> combinations = mapLetter(digits);

    // Print the results
    for (string combo : combinations) {
        cout << combo << " ";
    }
    cout << endl;

    return 0;
}
