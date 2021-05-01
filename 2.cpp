#include <iostream>
#include <math.h>
using namespace std;

//判断是否为素数
int judge(int num)
{
    int i = 2;
    while (i <= sqrt(num))
    {
        if ((num / i) * i == num)
        {
            break;
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n, i, num1, num2;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> num1 >> num2;
    }
    return 0;
}