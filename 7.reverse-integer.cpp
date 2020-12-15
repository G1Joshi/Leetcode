/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        long long int n = x, r = 0;
        if (n < 0)
            n *= -1;
        while (n)
        {
            r = r * 10 + n % 10;
            if (r > pow(2, 31) - 1)
                return 0;
            n /= 10;
        }
        if (x < 0)
            return -r;
        return r;
    }
};
// @lc code=end
