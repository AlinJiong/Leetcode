#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> sortArrayByParity(vector<int> &A)
{
    int n = A.size();
    int left = 0, right = 0; //双指针判断，left取到奇数，right取偶数，然后调换
    while (right < n)
    {
        if (A[right] % 2 == 0)
        {
            swap(A[left], A[right]);
            left++;
        }
        right++;
    }
    return A;
};

int main()
{
    vector<int> nums = {5, 3, 1, 2, 4};
    nums = sortArrayByParity(nums);
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << ' ';
    return 0;
}