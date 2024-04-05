// #include<iostream>
// #include<string>
// using namespace std;
// int findChar(string& str,int& n,char& key,int i)
// {
//     //base case
//     if(i>=n)
//     {
//         return -1;
//     }
//     //1 case handle kr lo baki recursion sambhal le ga
//     if(str[i]==key){
//         return i;
//     }

//     //recursive call or recursive relation
  
//    findChar(str,n,key,i+1);


// }

// int main()
// {
//     string str="ranurajput";
//     int n=str.length();
//     char key='t';
//     int i=0;

//   int ans=  findChar(str,n,key,i);
//   cout<<ans<<" ";
// }


//Print Digit

#include<iostream>
using namespace std;
void valuedigit(int n)
{
    // base case
    if(n==0)
    return;

    //1 case tum solve kr do baki recursion sambhal le ga


    //Recursive call or recursive relation

    valuedigit(n/10);
         n=n % 10;
    cout<<n<<" ";

}

int main()
{
    int n=78657;
 valuedigit(n);


}