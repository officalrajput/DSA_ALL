#include <iostream>
#include <vector>
using namespace std;

void findSubsequences(string str, int i, string output, vector<string> &result) {

    if (i >= str.length()) {
        //Not include Empty string 
        if (!output.empty()) {
            result.push_back(output);
        }
        return;
    }

    // Exclude the current character
    findSubsequences(str, i + 1, output, result);

    // Include the current character
 output.push_back(str[i]);
    findSubsequences(str, i + 1,output, result);
}

vector<string> subsequences(string str) {
    vector<string> result;
    findSubsequences(str, 0, "", result);
    return result;
}
