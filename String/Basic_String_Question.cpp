// #include<iostream> 
// #include<string.h>
// using namespace std;

// void upperCase(char name[])
// {
//     int n=strlen(name);
//     for(int i=0;i<n;i++)
//     {
//         if(name[i] != ' ' && name[i]>='a' && name[i]<='z')
//         {
//         name[i]=name[i]-'a'+'A';
//         }
//     }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<name[i];
    // }


// }

// bool plaindrone(char name[])
// {
//     int start=0;
//     int end=strlen(name)-1;

//     while(start<=end)
//     {
//         if(name[start]!=name[end])
//         {
//             return false;
//         }
//         else{
//             start++;
//             end--;
//         }
//     }
//     return true;

// }

// int replaceSpaces(char name[])
// {
//     int start=0;
//     int n=strlen(name);

//     for(int i=0;i<n;i++)
//     {
//         if(name[i]== ' ')
//         {
//            name[i]='@';
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<name[i];
//     }

// }
//  void ReverseChar(char name[])
//  {
//     int start=0;
//     int n=strlen(name);
//     int end=n-1;

//     while(start<=end)
//     {
//         swap(name[start],name[end]);
//         start++;
//         end--;
//     }

//     for(int i=0;i<n;i++)
//     {
//         cout<<name[i];
//     }
//  }
// int main()
// {
//     char name[50];
    // // cin>>name;
    // // cin.getline(name,10);
    // // cout<<"Printing the full name: "<<" "<<name;
    // cin>>name[3];
    // cin>>name;
    // cin>>name;
    // cin.getline(name,30 );
    // null character---termination by default end of the char array

    // int length=0;
    // int count=0;
    // while(name[count] != '\0')
    // {
    //     length++;
    //     count++;

    // }
    // cout<<length;


//    replaceSpaces(name);
//   cout<< plaindrone(name);
// upperCase(name);
// cout<<name;

// }


//String


#include<iostream>
#include<string.h>
using namespace std;

bool comparestring(string ch1,string ch2)
{
    if(ch1.length() != ch2.length())
    return false;
int i=0;
int j=0;
   
   while(i<ch1.length() && j<ch2.length())
   {
    if(ch1[i]!=ch2[j])
    {
        return false;
    }
    else{
        i++;
        j++;
    }

   }
   return true;
}
int main()
{
    string ch1;
    string ch2;
    cout<<"Enter the input for ch1:"<<endl;
    getline(cin,ch1);
    cout<<"Enter the input for ch2 :"<<endl;
    getline(cin,ch2);

    cout<<comparestring(ch1,ch2);
}