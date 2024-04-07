#include<iostream>
#include<vector>
using namespace std;

bool Sorted(vector<int> &v,int &n,int i)
{
    //base case
    if(i==n-1)
    {
        return true;
    }

    //Ek solve kar do baki recursion sambhal le ga 

    if(v[i+1]<v[i])
    {
        return false;
    }

   int ans= Sorted(v,n,i+1);
   return ans;

}
int main()
{
    vector<int> v{1,2,3,4,5};
    int n=v.size();
    int i=0;

   int isSorted= Sorted(v,n,i);

   if(isSorted)
   {
    cout<<"Array is Sorted ";
   }

   else{
    cout<<"Array is not sorted";
   }
}