#include<iostream>
using namespace std;

int climbstarirs(int n)
{
    //base case
    if(n==0 || n==1)
    {
        return 1;
    }

    //recursive call

    return climbstarirs(n-1)+climbstarirs(n-2);

}
int main()
{
    int n;
    cout<<"Enter the total stairs:"<<endl;
    cin>>n;

   cout<< "total Ways to go on stairs:"<<climbstarirs(n);
}