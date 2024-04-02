//Page no--> 32
int createAtoi(string s) {
   int i=0;
   int sign=1;//positive;
   int num=0;

//Removing Leading White Spaces From string
   while(s[i]==' ')
   {
       i++;
   }

   if(i<s.length() && (s[i]=='+' || s[i]=='-'))
   {
       //Check sign wether its is postive and negative the return for positive 1 and negative for-1
       sign = s[i]=='+' ? 1 : -1;
       i++;
   }
 
   while(i<s.length() && isdigit(s[i]))
   {
       //Handle Out of Range case and if equal then handle this case 
       if(num>INT_MAX/10 || (num==INT_MAX/10 && s[i]>'7'))
       {
           return sign==-1 ? INT_MIN : INT_MAX;
       }
       //Taking One by one Number like 1234 =num then 
       // 1,1*10+2=12,12*10+3=123 like this
       num = num *10 + (s[i]-'0');
       i++;
   }

   return num*sign;


}