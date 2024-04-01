//page No. --> 26
class Solution {
public:
    int strStr(string haystack, string needle) {
        //Here we check outer string 

        for(int i=0;i<haystack.size();i++)
        {
              //this loop for inner string
            for( int j=0;j<needle.size();j++)
            {
              //why we use here i+j because we need to incement haystack string also when it will be 0
              //Once you dry run yoy got the logic of this problem
                if(needle[j]!=haystack[i+j])
                break;

            //be aware that when all needle string check it will return first index of the haystack string
            if(j==needle.size()-1)
                {
                    return i;
                }
            }
        }
        return -1;
        
    }
};