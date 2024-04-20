#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // for std::sort
using namespace std;

void permutationPrint(string &str, int i, vector<string> &result) {
    // Base case
    if (i >= str.length()) {
        result.push_back(str);
        return;
    }

    // Swapping
    for (int j = i; j < str.length(); j++) {
        // Swap
        swap(str[i], str[j]);

        // Recursive call
        permutationPrint(str, i + 1, result);

        // Backtracking
        swap(str[i], str[j]);
    }
}

vector<string> generatePermutations(string &str) {
    vector<string> result;
    int i = 0;
    permutationPrint(str, i, result);
    return result;
}