class Solution {
public:
    string removeDuplicates(string s)
    {
      string ans="";
      int n = s.length();
      for(int i=0;i<n;i++)
      {
          if(ans.length()==0)
          {
              ans.push_back(s[i]);
          }
          else if(s[i] != ans.back())
          {
              ans.push_back(s[i]);
          }
          else 
          {
              ans.pop_back();
          }
      }
         return ans;
    }
};
