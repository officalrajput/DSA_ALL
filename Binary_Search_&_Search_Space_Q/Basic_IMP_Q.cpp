// nearly sorted Array  using binay search
// #include<iostream>
// #include<vector>
// using namespace std;
// int nearlySortedArray(vector<int> arr,int target)
// {
//     int start=0;
//     int end=arr.size();
//     int mid=start + (end - start)/2;
//     while(start <= end)
//     {
//         if(arr[mid-1] == target )
//         {
//             return mid-1;
//         }

//         else if(arr[mid] == target)
//         {
//             return mid;
//         }

//         else if(arr[mid+1] == target)
//         {
//             return mid + 1;
//         }

//         else if(arr[mid] > target)
//         {
//             end = mid - 2;
//         }

//         else{
//             start = mid + 2;
//         }
//          mid=start + (end - start)/2;
//     }
// }

// int main()
// {
//     int n;
//     cout<<"Enter the size of the array:"<<endl;
//     cin>>n;

//     vector<int> arr(n);
//     cout<<"Enter the array Elements:"<<endl;
//     for(int i=0;i<arr.size();i++)
//     {
//         cin>>arr[i];

//     }
//     int target;
//     cout<<"Enter the target which you have to find:"<<endl;
//     cin>>target;

//    int foundIndex = nearlySortedArray(arr,target);

//    cout<<"index of the number which is present in sorted Array:"<<foundIndex;

// }

// Search Space Question

// divide two number by binary Search handle negative case and precision accurate case means double case also

// #include <iostream>
// #include <vector>
// using namespace std;
// int quotient(int dividend, int divisor,int precision)
// {
//     int start = 0;
//     int end = dividend;
//     int mid = start + (end - start) / 2;
//     int ans = 0;
//     while (start <= end)
//     {
//         if (abs(mid * divisor) <= abs(dividend))
//         {
//             ans = mid;
//             start = mid + 1;
//         }

//         else if (abs(mid * divisor) > abs(dividend))
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     if((dividend<0 && divisor<0) || (dividend>0 && divisor>0))
//     {
//         return ans;
//     }
//     else {
//         return -ans;
//     }
// }

// int main()
// {
//     int divisor, dividend,precision;
//     cout << "Enter the dividend" << endl;
//     cin >> dividend;

//     cout << "Enter the divisor" << endl;
//     cin >> divisor;

//     cout<<"Enter the precision:"<<endl;
//     cin>>precision;

//     int findQuotient = quotient(dividend, divisor ,precision);
//     double step=0.1;
//     double finalAns=findQuotient;

//     for(int i=0;i<precision;i++)
//     {
//         for(double j = finalAns; j*divisor<=dividend;j = j + step)
//         {
//             finalAns=j;

//         }
//         step = step /10;

//     }
//     cout<<"double or float  answer:"<<finalAns<<endl;
//     cout << "nearly Quotient is: " << findQuotient;
// }

// find the odd occuring element in an Array [pair exist]

#include <iostream>
#include <vector>
using namespace std;
int oddOccuringElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size();
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        //handle for Single Element
        if(start == end)
        {
            return start;
        }

        //handle Even case
        if(mid % 2==0)
        {
            if(arr[mid] == arr[mid+1])
            {
                start = mid + 2;
            }
            else{
                end = mid;

            }

        }
         // handle odd case
        else{
            if(arr[mid-1] == arr[mid])
            {
                start = mid +1;
            }
            else{
                end = mid - 1;
            }
           


        }
          mid = start + (end - start) / 2;
    }
return -1;
    
}

int main()
{
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the array Elements:" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int foundIndex = oddOccuringElement(arr);

    cout << "Odd occuring index :" << foundIndex<<endl;
     cout << "Odd occuring Element :" << arr[foundIndex];
}