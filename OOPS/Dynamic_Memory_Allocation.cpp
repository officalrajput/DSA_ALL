//1D Array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=5;

//     int *arr = new int[n];
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i];
//     }

// }


// 2D Array

#include<iostream>
using namespace std;
int main()
{
    int row=5;
    int col=3;
    int **arr = new int*[row];

    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }

    //printing the value

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}