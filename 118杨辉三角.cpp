#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> res;
    vector<int> t1; //初始
    vector<int> t2; //中间变化存储

    t1.push_back(1); //存入一个1
    for (int i = 1; i <= numRows; i++)
    {
        t2.push_back(1); //存入开头一个1
        for (int k = 1; k < t1.size(); k++)
        {
            t2.push_back(t1[k - 1] + t1[k]);
        }
        t2.push_back(1);   //存入结尾一个1
        res.push_back(t1); //存入每一行
        t1 = t2;           //下一行变换
        t2.clear();
    }
    return res;
};

int main()
{
    vector<vector<int>> res = generate(5);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}
