#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
   int start = 0;
   int end = s.size() - 1;
    while(start <= end)
     {
        if(s[start] != s[end])
          {
              return false;
          }
        else
         {
             start++;
             end--;
         }
           return true;
     }  
}
