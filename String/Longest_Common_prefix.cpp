#page no---15

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";

        for(int i = 0; i < strs[0].length(); i++ )
        {
            char cur=strs[0][i];
            for(int j = 1; j < strs.size(); j++)
            {
                // If current index is out of bounds for this string or characters don't match, return the result
                if(i >= strs[j].length() || strs[j][i] != cur)
                {
                    return result;
                }
            }
            result += cur;
        }

        return result;
    }
};