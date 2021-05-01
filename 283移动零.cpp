#include <iostream>
#include <string>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            for (int j = i; j < n - 1; j++)
            {
                nums[j] = nums[j + 1];
            }
            nums[n - 1] = 0;
            i--;
            n--;
        }
    }
};

void moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    int left = 0, right = 0; //双指针定位法
    while (right < n)
    {
        if (nums[right])
        {
            swap(nums[left], nums[right]);
            left++;
        }
        right++;
    }
};

int main()
{
    vector<int> num = {0, 1, 0, 3, 12};
    moveZeroes(num);
    for (int i = 0; i < num.size(); i++)
        cout << num[i] << ' ';
    return 0;
}