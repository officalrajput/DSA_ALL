//page->No:-29
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ///Make a Key Value Pair 
        map<string,vector<string>> mp;

        for(auto str:strs)
        { 
            //Store All string into s and sort them
            string s=str;
             sort(s.begin(),s.end());
            // push into map 
            mp[s].push_back(str);
        }
      //Iterate over the map and store into ans value (second)
        vector<vector<string>> ans;
        for( auto itt=mp.begin();itt!=mp.end();itt++)
        {
           
            ans.push_back(itt->second);
        }
        return ans;
        
    }
};