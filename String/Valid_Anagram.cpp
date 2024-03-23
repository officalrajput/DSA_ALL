# page No-- 9 to 11

//Approach-2

//In this Approch We make a Hash table or Frequncy Table 
//Because total Ascii value is 256 so we can create Array 0-255 and initialize with zero
//we intialize with zero because if any character will come into chr Array then it will increse by +1
//and if We Take an Example str s1 = "Ranu" str s2="anuR" create s1 hash table if R in array is 1
// a --1, n--1, u---1  now with str s2 decrese -1 if all hash table char will zero then its is a Anagram String

// class Solution {
// public:
// bool isAnagram(string s, string t) {
//     int hash[256]={0};

//     for(int i=0;i<s.length();i++)
//     {
//         cout<<(int)s[i]<<" ";
//       hash[s[i]]++;
//     }

//     for(int i=0;i<t.size();i++)
//     {
//         hash[t[i]]--;
//     }

//     for(int i=0;i<256;i++)
//     {
//         if(hash[i]!=0)
//         return false;
//     }
//     return true;   

//     }
// };





//Approach-1

// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;

// class Solution {
// public:
   

//     bool isAnagram(string s, string t) {
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
        
//        if(s==t)
//        {
//         return true;
//        }
//        else
//        return false;
//     }
// };