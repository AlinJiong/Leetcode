#include <iostream>
using namespace std;

int get(int money, int bottle)
{
    bottle = money + bottle;  //计算最后瓶子的数目
    if (bottle / 2 == 0)  //瓶子只剩0/1个结束
        return money;
    return money + get(bottle / 2, bottle % 2);
};
int main()
{
    cout << get(0, 0) << endl;
    cout << get(1, 0) << endl;
    cout << get(2, 0) << endl;
    cout << get(3, 0) << endl;
    cout << get(4, 0) << endl;
    return 0;
}