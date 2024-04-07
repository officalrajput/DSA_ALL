#include<iostream>
using namespace std;
bool binarySearch(int *arr,int &n,int start,int end,int &key)
{
   


    //base case
    if(start>end)
    {
        return false;
    }
    int mid=start + (end-start)/2;
    //1 case likh do baki recursion sambhal le ga
    if(arr[mid]==key)
    {
        return true;
    }
    else if(arr[mid]<key){
         //Recursive call or recursive relation
   return  binarySearch(arr,n,mid+1,end,key);
    }
    else{
      return    binarySearch(arr,n,start,mid-1,key);

    }

   


}
int main()
{

    int arr[]={1};
    int n=1;
   
    int key=1;
     int start=0;
    int end=n-1;
   

   int keyPresent= binarySearch(arr,n,start,end,key);

   if(keyPresent)
   {
    cout<<"Key is present in array";
   }
   else{
    cout<<"Key is not present in array";
   }

}