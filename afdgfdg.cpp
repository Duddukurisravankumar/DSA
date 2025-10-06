#include<bits/stdc++.h>
using namespace std;
// Helper function to generate permutations
void backtrack(string &s, vector<bool> &used, string &current, vector<string> &result) {
    if (current.size() == s.size()) {
        result.push_back(current);
        return;
    }
    for (int i = 0; i < s.size(); ++i) {
        if (used[i]) continue;

        // Skip duplicates
        if (i > 0 && s[i] == s[i - 1] && !used[i - 1]) continue;

        used[i] = true;
        current.push_back(s[i]);
        backtrack(s, used, current, result);
        current.pop_back();
        used[i] = false;
    }
}

// Function to find all unique permutations
vector<string> find_permutation(string S) {
    vector<string> result;
    sort(S.begin(), S.end()); // Sort to ensure lexicographic order
    vector<bool> used(S.size(), false);
    string current;
    backtrack(S, used, current, result);
    return result;
}

// Main function to take input and print output
int main() {
    string S;
    cout << "Enter the string: ";
    cin >> S;

    vector<string> permutations = find_permutation(S);

    for (const string &perm : permutations) {
        cout << perm << " ";
    }

    cout << endl;
    return 0;
}
