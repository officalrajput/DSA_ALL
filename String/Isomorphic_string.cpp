#page no---21
class Solution {
public:
    bool isIsomorphic(string s, string t) {
//Here We making a hash table so that we map char value to other char
//and inilialse with zero all value
        int hash[256]={0};
//mapChar making bool so we easily identify that its is  succesfully  mapeed or not once 
        bool mapChar[256]={0};

        for(int i=0;i<s.length();i++)
        {
//Check Value  in hash and mapChar is Zero Already or not then it will
//go into map condition otherWise return false;
            if(hash[s[i]]==0 && mapChar[t[i]]==0)
            {
// map the value t[i] to inside s[i]
                hash[s[i]]=t[i];
//change the zero on mapChar table =1 so that will not mapped with other value
                mapChar[t[i]]=true;
            }
        }
        for(int i=0;i<s.length();i++)
        {
 //After Mapped all the value then hash table ch match with string t if not 
 //equal the return false either return true
            if(char(hash[s[i]]) != t[i])
            return false ;
        }
        return true;
    }
};