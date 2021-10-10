#include <iostream>
#include <vector>
using namespace std;
int GetNumberOfK(vector<int> data, int k)
{
    int len = data.size();
    int left = 0;
    int right = len - 1;

    int flag = -1;
    while (left <= right)
    {
        int mid = (right + left) / 2;
        if (data[mid] == k)
        {
            flag = mid;
            break;
        }
        else if (data[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if (flag == -1)
        return 0;
    else
    {
        int count = 0;
        for (int i = flag; i >= 0; i--)
        {
            if (data[i] == k)
                count++;
            else
                break;
        }
        for (int i = flag + 1; i < len; i++)
        {
            if (data[i] == k)
                count++;
            else
                break;
        }
        return count;
    }
}

int main()
{
    return 0;
}
