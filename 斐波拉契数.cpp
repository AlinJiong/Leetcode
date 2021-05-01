#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int res = 0, pre = 0, cur = 1;
    for (int i = 2; i < n; i++)
    {
        res = pre + cur;
        pre = cur;
        cur = res;
        cout << res << endl;
    }
    return 0;
}