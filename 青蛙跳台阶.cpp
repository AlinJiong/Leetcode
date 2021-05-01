#include <iostream>
using namespace std;
int main()
{
    int pre = 1, cur = 2, res = 0;
    int n;
    cin >> n;
    if (n == 1 || n == 2)
        cout << n;
    else
    {
        //青蛙跳台阶，跟斐波拉契数差不多，只考虑最后两种情况，
        //f(n) = f(n-1) + f(n-2)
        //若可以跳n个台阶，则 f(n) = f(n-1) + f(n-2) + f(1) + 1 = 2*f(n-1)
        for (int i = 2; i < n; i++)
        {
            res = cur + pre;
            pre = cur;
            cur = res;
            cout << res << endl;
        }
    }
    return 0;
}