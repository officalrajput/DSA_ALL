void Find(string &s, vector<string> &ans, string output, vector<string> &mapping, int index)
{
    //base case
    if (index >= s.length())
    {
        ans.push_back(output);
        return;
    }

    // Get the digit from the string
    int digit = s[index] - '0';
    string valueInMapping = mapping[digit];

    // Iterate through each character corresponding to the digit
    for (int i = 0; i < valueInMapping.length(); i++)
    {
        char ch = valueInMapping[i];

        // Append the character to the output
        output.push_back(ch);

        // Recursive call with incremented index
        Find(s, ans, output, mapping, index + 1);

        // Backtrack: Remove the last character from the output
        output.pop_back();
    }
}

vector<string> combinations(string s)
{
    vector<string> ans;
    string output = "";
    int index = 0;
	

    // Map the digits to corresponding characters
    vector<string> mapping(10);
    mapping[2] = "abc";
    mapping[3] = "def";
    mapping[4] = "ghi";
    mapping[5] = "jkl";
    mapping[6] = "mno";
    mapping[7] = "pqrs";
    mapping[8] = "tuv";
    mapping[9] = "wxyz";

    // Call the recursive function
    Find(s, ans, output, mapping, index);

    return ans;
}
