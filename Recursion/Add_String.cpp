class Solution {
public:
     void addRe(string &num1,int p1,string &num2,int p2,int carry,string &ans)
     {
        //base case check
        if(p1<0 && p2<0)
        {
            if(carry!=0)
            {
            ans.push_back(carry + '0');
            }
            return;
        }


        //Ek case solve kr do baki recursion sambhal le ga
        //First you extract int from string
        int n1=(p1>=0) ? num1[p1]-'0' : 0;
        int n2=(p2>=0) ? num2[p2]-'0' :0;
        int sum=n1+n2+carry;
        //now find out the digit 
        int digit=sum%10;
            carry=sum/10;
        ans.push_back(digit+'0');

        //recurisve relation and recursive call
        addRe(num1,p1-1,num2,p2-1,carry,ans);

     }
    string addStrings(string num1, string num2) {
        int carry=0;
        string ans="";
        addRe(num1,num1.size()-1,num2,num2.size()-1,carry,ans);
        reverse(ans.begin(),ans.end());
        return ans;
 
    }
};