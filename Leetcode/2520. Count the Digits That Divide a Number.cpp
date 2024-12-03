// https://leetcode.com/problems/count-the-digits-that-divide-a-number/

class Solution
{
public:
    int countDigits(int num)
    {
        int cnt = 0, x = num;
        while (x != 0)
        {
            if (num % (x % 10) == 0)
                cnt++;
            x /= 10;
        }
        return cnt;
    }
};