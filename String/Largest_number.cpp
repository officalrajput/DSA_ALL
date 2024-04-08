//page.no--->47
class Solution {
public:
 static bool myComp(string a,string b)
 {
    string t1=a+b;
    string t2=b+a;

    return t1>t2;
    // return a>b;

 }
    string largestNumber(vector<int>& nums) {

//Here we convert int value to string as given into constraints 
        vector<string> snums;
        for(auto n:nums)
        {
            snums.push_back(to_string(n));
        }
//now sort that string and we know that string sort into lexicographical 
//order as we seen into notes what is lexicographical or alphabatical order

//We use here custom comparator we seen in notes what is custom compatator
sort(snums.begin(),snums.end(),myComp);

//handle zero wala case

if(snums[0]=="0") return "0";

//treverse on all string and store into ans string
string ans="";
for(auto s:snums)
{
    ans+=s;
}
return ans;
    }
};