#page no---18
class Solution {
public:
   
//We can create this function like this or we convert all cases to lower case
//by the help of inbuilt function tolower function and pass ch into it tolower(ch)

//    bool isVowels(char c) {
//         // Check if a character is a vowel
//         return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
//                 c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
//     }

 bool isVowels(char c) {
        // Check if a character is a vowel
        //convert it into lower case all ch
        c=tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    string reverseVowels(string s) {
        int start=0;
        int end=s.size()-1;

        while(start<end)
        {
            // Check if both characters are Vowels
            if (isVowels(s[start]) && isVowels(s[end])) {
                // Swap only if both are Vowels
                swap(s[start], s[end]);
                start++;
                end--;
            }
            else if(!isVowels(s[start]))
            {
                start++;
            }
            else{
                end--;
            }
           
        }
         return s;
        
    }

   
};