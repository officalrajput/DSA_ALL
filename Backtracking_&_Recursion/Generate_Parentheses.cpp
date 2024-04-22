class Solution {
public:
  void Find(vector<string> &ans,int n,int open,int close,string &output)
  {
    //base case
    if(open==0 && close==0)
    {
        ans.push_back(output);
        return;
    }

    //Ek case solve kr do baki recursion sambhal le ga
    //include  open  bracket wala case
    if(open>0)
    {
        output.push_back('(');
        //recursive call or recursive relation
        Find(ans,n,open-1,close,output);
        //backtracking
        output.pop_back();
    }

    //include closed wala bracket if only first open bracket present into a output

    if(close>open)
    {

        output.push_back(')');
        //recursive call or recursive relation
        Find(ans,n,open,close-1,output);
        //backtracking
        output.pop_back();
        
    }

  }
    vector<string> generateParenthesis(int n) {
    vector<string> ans;
    int open=n;
    int close=n;
    string output="";
    Find(ans,n,open,close,output);
    return ans;
        
    }
};