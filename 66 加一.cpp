#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> plusOne(vector<int> &digits)
{
    vector<int> res;
    int n = digits.size() - 1;
    int add = 1;  //add为进位
    while (n >= 0 || add != 0)
    {
        int result = n >= 0 ? digits[n] + add : add; //最后进位情况，此处就不是0来判断了
        add = result / 10;
        res.push_back(result % 10);
        n--;
    }
    reverse(res.begin(), res.end());
    return res;
};

int main()
{    
    return 0;
}