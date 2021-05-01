#include <iostream>
#include<algorithm>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

string longset(string &s1, string &s2)
{
    int length = min(s1.size(), s2.size());
    int index = 0;
    for (int i = 0; i < length; i++)
    {
        if (s1[i] == s2[i])
            index++;
        else
            break;
    }
    return s1.substr(0, index);
};
string longestCommonPrefix(vector<string> &strs)
{
    if (!strs.size())
        return "";
    int n = strs.size();
    string flag = strs[0];
    for (int i = 1; i < n; i++)
    {
        flag = longset(flag, strs[i]);
        if (flag.size() == 0)
            break;
    }
    return flag;
};

int main()
{

    return 0;
}