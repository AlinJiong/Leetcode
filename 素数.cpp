#include <iostream>
using namespace std;

int judge(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    cout << judge(1) << endl;
    cout << judge(4) << endl;
    return 0;
}