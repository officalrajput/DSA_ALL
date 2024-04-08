#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int coinChain(vector<int> &arr,int target)
{
    //base case
    if(target==0){
        return 0;
    }
    if(target<0)
    {
        return INT_MAX;
    }

    // Ek case solve kr do baki recursion sambhal le ga
    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++)
    {
        int ans=coinChain(arr,target-arr[i]);

        if(ans!=INT_MAX)
        {
            mini=min(mini,ans+1);
        }
    }
    return mini;
    

}
int main()
{

vector<int> arr{3,5};
int target=8;
cout<<coinChain(arr,target);
}