#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int lengthOfLongestSubstring(string s)
{

    int size = s.size();
    int i = 0, j, k, max = 0;
    for (j = 0; j < size; j++)
    {
        for (k = i; k < j; k++)
        {
            //从前往后推断重复字符，类似于两个标记滑动
            if (s[k] == s[j])
            {
                i = k + 1;
                break;
            }

            //调整最大值
            if (j + k - 1 > max)
                max = j - i + 1;
        }
    }
    return max;
};
int main()
{
    return 0;
}