#include <iostream>
using namespace std;

int climbStairs(int n)
{
    if (n == 1 || n == 2)
        return n;
    else
    {
        int ans, pre = 1, cur = 2;
        for (int i = 2; i < n; i++)
        {
            ans = pre + cur;
            pre = cur;
            cur = ans;
        }
        return ans;
    }
};

int main()
{
    cout << climbStairs(3);
    cout << climbStairs(4);
    return 0;
}