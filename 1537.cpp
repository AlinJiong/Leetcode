/*
 * @lc app=leetcode.cn id=1537 lang=cpp
 *
 * [1537] 最大得分
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSum(vector<int> &nums1, vector<int> &nums2)
    {
        nums1.push_back(1);
        nums2.push_back(2);
        return nums1[0];
    }
};
// @lc code=end
