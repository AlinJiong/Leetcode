#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums){
    int a = 0;
    // 异或：
    // 交换律：a ^ b ^ c <=> a ^ c ^ b
    // 任何数于0异或为任何数 0 ^ n = > n
    // 相同的数异或为0 : n ^ n = > 0 
    for (int i = 0; i < nums.size(); i++)
    {
        a ^= nums[i];
    }
    return a;
};

int main()
{
    return 0;
}
