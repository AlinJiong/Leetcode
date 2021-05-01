#include <iostream>
#include <string>
#include <vector>
using namespace std;
void reverseString(vector<char> &s)
{
    int len = s.size();
    for (int i = 0; i < len / 2;i++)
    {
        swap(s[i], s[len - i - 1]);
    }
};

int main()
{

    return 0;
}