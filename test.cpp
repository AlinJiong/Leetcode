#include <iostream>
#include <string>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    int left = 0, right = 0;
    while(right<n)
    {
        if(nums[right])
        {
            swap(nums[left], nums[right]);
            left++;
        }
        right++;
    }
};

int main()
{
    vector<int> num = {1,2,3,4,5,0};
    moveZeroes(num);
    for (int i = 0; i < num.size(); i++)
        cout << num[i] << ' ';
    return 0;
}