/*
//  ======= number of subset ======
#include <iostream>
#include <vector>
using namespace std;

void calcSubset(vector<int>& A, vector<vector<int>>& res, vector<int>& subset, int index) {
    res.push_back(subset);
    for (int i = index; i < A.size(); i++) {
        subset.push_back(A[i]);
        calcSubset(A, res, subset, i + 1);
        subset.pop_back();
    }
}

vector<vector<int>> subsets(vector<int>& A) {
    vector<int> subset;
    vector<vector<int>> res;
    calcSubset(A, res, subset, 0);
    return res;
}

int main() {
    vector<int> array = {1, 2, 3};
    vector<vector<int>> res = subsets(array);
    for (auto subset : res) {
        for (auto num : subset)
            cout << num << " ";
        cout << endl;
    }
    return 0;
}
*/
//  ======= number of subset( subsequences of string ) ======

#include <iostream>
using namespace std;

// Function to generate subsequences
void subsequences(string str, string output, int index) {
    // Base condition: If index is out of bounds, print the current subsequence
    if (index == str.length()) {
        cout << output << endl;
        return;
    }

    // Exclude the current character
    subsequences(str, output, index + 1);

    // Include the current character
    output.push_back(str[index]);
    subsequences(str, output, index + 1);
}

int main() {
    string str = "abs";
    string output = "";

    // Call the function to generate subsequences
    subsequences(str, output, 0);

    return 0;
}
