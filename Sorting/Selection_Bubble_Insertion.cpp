// //Selection Sort (SELECT ----> MINIMUM ------> SWAP)
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int SelectionSort(vector<int> arr)

// {
//     int n=arr.size();
//     for(int i=0;i<n-1;i++)
//     {
//         int mini=i;
//         for(int j=i;j<n;j++)
//         {
//             if(arr[j] < arr[mini])
//             {
//                mini=j;
//             }
//         }
//         swap(arr[i],arr[mini]);
//     }

//     cout<<"Printing THe sorted Array in Selection Sort:";
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of the array:" << endl;
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter the array Elements:" << endl;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cin >> arr[i];
//     }

//    SelectionSort(arr);


// }


//Bubble Sort or Sinky Sort

//Selection Sort (SELECT ----> MINIMUM ------> SWAP)
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int bubbleSort(vector<int> arr)


// {
     
//     int n=arr.size();
//     for(int round=1;round<n;round++)
//     {
//         int swapped=0;
       
//         for(int j=0;j<n-round;j++)
//         {
//             if(arr[j] >arr[j+1])
//             {

//                 swap(arr[j],arr[j+1]);
//                 swapped++;
//             }
//         }
//         if(swapped==0)
//     {
//         break;
//     }
//     }
    
//         cout<<"This is the Bubble sort :"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

    
    
// }
// int main()
// {
//     int n;
//     cout << "Enter the size of the array:" << endl;
//     cin >> n;

//     vector<int> arr(n);
//     cout << "Enter the array Elements:" << endl;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cin >> arr[i];
//     }

//     bubbleSort(arr);


// }


//Insertion Sort ( step wise fetch Value--> comprasion--> shifting---> Copy)



#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int InsertionSort(vector<int> arr)
{
    int n=arr.size();
    ////outer Loop

    for(int round=1;round<n;round++)
    {
        //fetch the value
        int value=arr[round];
        //comprasion 
        int j=round-1;
        for(;j>=0;j-- )
        {
            //shift
            if(arr[j] > value)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }

        //copy
        arr[j+1]=value;


    } 

    
    cout<<"This is the Insertion Sort :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
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

   InsertionSort(arr);


}