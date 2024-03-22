//Notes On Conceptul Note Book 
//Page NO.--- 3

//Approch - 1

//First Find the All Substring Using through Even odd case
//Odd Case--
//Where i And j Will start form same place
//Even Case ---
//Where i and j will start From different place i and i+1
//Then Expand the Array left and right part Match then count will be increse
//Time Complexity----O(n^2)

// class Solution {
// public:
//Expand function is created for to  search substring match  left and right part or not
//if its is match then left-- and right++ and count will be increse

// int expandIndex(string s,int start,int end)
// {
//     int count=0;
// while(start>=0 && end<s.length() && s[start]==s[end])
// {
//     count++;
//     start--;
//     end++;
// }
// return count;
// }




// int countSubstrings(string s)
// {
//     int totalCount=0;
//     for(int i=0;i<s.length();i++)
//     {
        //for odd Case We find Odd Substring 
        //because i and j will start from same index in odd case
        // int oddKaAns=expandIndex(s,i,i);
        // totalCount+=oddKaAns;
        
        //for even Case We find Even Substring
        //because i and j will start from different index

//         int evenKaAns=expandIndex(s,i,i+1);
//         totalCount+=evenKaAns;
   
//     }
//     return totalCount;
//     }
// };




//Approch - 2
//first find All Substring into string
//then then each substring that its is palindrome or not 
//return count  
//Time Complexity ---O(n^3)

// #include <iostream>
// #include <string>
// using namespace std;

// bool Checkpalindrome(string s)
// {
//     int start = 0;
//     int end = s.length() - 1;

//     while (start <= end)
//     {
//         if (s[start] != s[end])
//         {
//             return false;
//         }
//         else
//         {
//             start++;
//             end--;
//         }
//     }
//     return true;
// }

// void AllSubstrings(string s)
// {
//     for (int i = 0; i < s.length(); i++)
//     {
//         string substr = "";
      
//         for (int j = i; j < s.length(); j++)
//         {
//             substr += s[j];
//             if (Checkpalindrome(substr)) {
//                 cout << substr << " is a palindrome." << endl;
//             }
//         }
       
//     }
// }

// int main()
// {
//     string s;
//     cout << "Enter the string: ";
//     getline(cin, s);

//     AllSubstrings(s);

//     return 0;
// }
