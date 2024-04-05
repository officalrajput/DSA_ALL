//Printing the Array 

// #include<iostream>
// using namespace std;
// void PrintArray(int arr[],int n,int i)
// {
//     //base case
//     if(i>=n)
//     {
//         return ;
//     }

//     //1 case solve kardo baki recursion sambhal le ga
//     cout<<arr[i]<<" ";

//     //recursive relation or recursive call

//     PrintArray(arr,n,i+1);





// }
// int main()
// {
//     int arr[5]={7,88,90,12,4};
//     int i=0;
//     int n=5;
//   PrintArray(arr,n,i);
// }


//Find maximum and minimum

// #include <iostream>
// #include<limits.h>
// using namespace std;

// void findMax(int arr[], int n, int i, int& maxi) {
//         //base case
//         if(i >= n) {
//                 //array agar khtam hogya, poora traverse hogya
//                 //toh wapas aajao
//                 return;
//         }

//         //1 case solve krna h 
//         //current element ko cjheck karo for max
//         if(arr[i] > maxi) {
//                 maxi = arr[i];
//         }

//         //baaki recursion sambhal lega
//         findMax(arr, n, i+1, maxi);
// }


// void findMin(int arr[], int n, int i, int& mini ){
//         //base case
//         if( i >= n) {
//                 return;
//         }


//         //1 case solve krna padega
//         mini = min(mini, arr[i]);


//         //baaki recursion sambhal lega
//         findMin(arr, n, i+1, mini);

// }

// int main() {

//         int arr[] = {10,30,21,44,32,6,19,66};
//         int n = 8;

//         int maxi = INT_MIN;
//         int mini = INT_MAX;

//         int i = 0;
//         findMax(arr, n,i, maxi);
//         findMin(arr, n, i, mini);
//         cout << "maximum number is: "<< maxi << endl;
//         cout << "minimum number is: "<< mini << endl;



//   return 0;
// }


#include<iostream>
#include<climits>
using namespace std;
   void FindMax(int arr[],int n,int i,int& maxi)
   {
    //base case
    if(i>=n)
    {
        //agar array pura treverse hogya to vapas aa ajo
        return;
    }

    //1 case solve kar do baki recursion samahl lega
    if(arr[i]>maxi)
    {
        maxi=arr[i];
    }
    //recursive call or recursive relation
    FindMax(arr,n,i+1,maxi);
   }
int main(){
    int arr[]={10,30,21,44,32,6,19,66};
    int n=8;
    int i=0;
    int maxi=INT_MIN;
    FindMax(arr,n,i,maxi);

 cout << "maximum number is: "<< maxi << endl;

}
