#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void maxSum(vector<int> &arr,int i ,int &maxi,int sum  )
{
    //base case 
    if(i>=arr.size())
    {
        //max update
        maxi=max(maxi,sum);
        return ;
    }

    //include

    maxSum(arr,i+2,maxi,sum+arr[i]);

    //exclude

     maxSum(arr,i+1,maxi,sum);



    
}
int main()
{
    vector<int> arr{2,1,4,9  };
    int i=0;
    int maxi=INT_MIN;
    int sum=0;
    maxSum(arr,i,maxi,sum);
    cout<<maxi<<" ";
}