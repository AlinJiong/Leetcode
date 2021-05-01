#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string addBinary(string a, string b)
{
    int i = a.size() - 1;
    int j = b.size() - 1;
    int flag = 0;

    string ans = "";
    while (i >= 0 || j >= 0 || flag != 0)
    {
        int x = i >= 0 ? a[i] - '0' : 0;
        int y = j >= 0 ? b[j] - '0' : 0;
        int res = x + y + flag;
        ans.push_back('0' + res % 2);
        flag = res / 2;
        i--;
        j--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
};

int main()
{
    string a = "1010", b = "1011";
    string res = addBinary(a, b);
    cout << res << endl;
    return 0;
}