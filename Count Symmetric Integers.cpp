class Solution {
public:
    bool isSysmmetric(string str)
    {
        if(str.size() % 2 != 0) return false;
        int part_size = str.size() / 2;
    
        int a = 0;int b = 0;
        for (int i = 0 ; i < part_size; i++)
        {
            a += (str[i] - '0');
        }
        for (int i = part_size  ; i < 2 * part_size ; i++)
        {
            b += (str[i] - '0');
        }

        return a == b;
    }
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for (int start = low ; start <= high ; start++)
        {
            string str = to_string(start);
            if(isSysmmetric(str))
            {
                count++;
            }
        }
        return count;
    }
};
