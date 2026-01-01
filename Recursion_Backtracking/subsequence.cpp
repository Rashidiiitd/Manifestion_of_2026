#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * Generates all non-empty subsequences using backtracking.
 * @param input: The original string (passed by reference for efficiency).
 * @param current: The current subsequence being built.
 * @param index: The starting point for the next character selection.
 */
void generateSubsequences(const string &input, string &current, int index) {
    // Each recursive call represents a valid subsequence
    if (!current.empty()) {
        cout << current << " ";
    }

    for (int i = index; i < input.length(); i++) {
        // Step 1: Include character at index i
        current.push_back(input[i]);

        // Step 2: Recurse for the remaining characters
        generateSubsequences(input, current, i + 1);

        // Step 3: Backtrack (Remove last character) to explore other options
        current.pop_back();
    }
}

int main() {
    string s = "abc";
    string current = "";
    
    cout << "All non-empty subsequences of '" << s << "':" << endl;
    generateSubsequences(s, current, 0);
    cout << endl;

    return 0;
}
