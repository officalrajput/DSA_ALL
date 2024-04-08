#include <bits/stdc++.h> 
string intToRoman(int num) {
    // Write your code here.
//Larger to smaller value 
    string romanSymbol[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    int value[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string ans="";

  for(int i=0;i<13;i++)
  {
        while(num>=value[i])
    {
        ans+=romanSymbol[i];
        num=num-value[i];

    }
  }
  return ans;
}
