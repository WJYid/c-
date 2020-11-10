#include<iostream>
using namespace std;
int main()
{
    int nums[] = { 1,2,3,1,1,3 };
    int n = sizeof(nums) / sizeof(nums[0]);//数组长度
    int count = 0;//计数
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (nums[i] == nums[j]) count++;
        }
    }
    cout << count << endl;
    system("pause");
    return 0;
}