#include <iostream>
using namespace std;

int search(int array[], int n, int k)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (array[mid] == k)
            return mid + 1;
        if (array[mid] < k)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return 0; // 返回0表示失败
};

int main()
{

    return 0;
}