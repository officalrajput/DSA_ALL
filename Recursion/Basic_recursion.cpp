// //This code for counting print using recursion

// #include<iostream>
// using namespace std;

// void printCounting(int n)
// {
//     //Base Case is compulsory in recursion
//     if(n==0)
//     return;

//     //processing for printing reverse counting
//     // cout<<n<<" ";
//  //Recursive relation or recursive call
//     printCounting(n-1);

//     //processing for printing counting

//     cout<<n<<" ";
// }

// int main()
// {
//     int n;
//     cout<<"Enter the input";
//     cin>>n;

//     printCounting(n);
// }


//Find factorial


//This code for counting print using recursion

// #include<iostream>
// using namespace std;

// int fact(int n)
// {
//     //Base Case is compulsory in recursion
//     if(n==1)
//     return 1;

//     int ans=n * fact(n-1);
//     return ans;
// }

// int main()
// {
//     int n;
//     cout<<"Enter the input";
//     cin>>n;

//    cout<<"Factorial is:" <<fact(n);

// }


//Fibonacci series

#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;

     return fib(n-1)+fib(n-2);

    
}

int main()
{
    int n;
    cout<<"Enter the input: ";
    cin>>n;

    cout<<"Fibonacci sum is : " << fib(n);

    return 0;
}
