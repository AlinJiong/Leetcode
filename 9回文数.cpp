#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    else if (x >= 0 && x < 10)
        return true;
    else
    {
        vector<int> nums;
        while (x)
        {
            nums.push_back(x % 10);
            x = x / 10;
        }
        int n = nums.size();
        for (int i = 0; 2 * i <= n; i++)
        {
            if (nums[i] != nums[n - i - 1])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    cout << isPalindrome(121) << endl;
    cout << isPalindrome(-121) << endl;
    cout << isPalindrome(123) << endl;
    return 0;
}