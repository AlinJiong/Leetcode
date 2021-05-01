#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool repeatedSubstringPattern(string s)
{
    int n = s.size();
    for (int i = 1; i * 2 <= n; i++)
    {
        if (n % i == 0)   //只有倍数才进行对比
        {
            bool match = true;
            for (int j = i; j < n;j++)
            {
                if (s[j] != s[j - i]) //如果匹配，则i个一循环，s[j]!=s[j-i]
                {
                    match = false;
                    break;
                }
            }
            if(match)
                return true;
        }
    }

    return false;
};

int main()
{

    return 0;
}