class Solution {
public:
    bool isVowel(char &ch)
    {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch =='U' );
    }
    bool halvesAreAlike(string s) {
        int n = s.length();

        int mid = n /2;
        int i = 0,j = mid +1;
        int leftcount =0;
        int rightcount =0;

        while(i < mid && j < n)
        {
            if(isVowel(s[i])) leftcount++;
            if(isVowel(s[j])) rightcount++;
            i++;
            j++;
        }
        return leftcount==rightcount;

    }
};
