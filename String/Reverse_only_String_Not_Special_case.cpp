//Here We use inbuilt function isalpha function or we create own function which having range is for upper case and lower 
//case Alphabet and return it  
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start = 0;
        int end = s.length() - 1;
        while (start < end) {
            // Check if both characters are letters
            if (isalpha(s[start]) && isalpha(s[end])) {
                // Swap only if both are letters
                swap(s[start], s[end]);
                start++;
                end--;
            } else if (!isalpha(s[start])) {
                // Move start pointer if it's not a letter
                start++;
            } else if (!isalpha(s[end])) {
                // Move end pointer if it's not a letter
                end--;
            }
        }
        return s;
    }
   
   //Or we use this 
   
    // bool isLetter(char c)
    // {
    //     return (c >=65 && c<=90) || (c>=97 && c<=122);
    // }
};