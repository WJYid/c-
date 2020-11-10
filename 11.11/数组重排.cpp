#include<iostream>
using namespace std;
int main()
{
    int num1[] = {1,2,3,4,4,3,2,1};
    int n = sizeof(num1)/sizeof(num1[0])/2; //数组长度
    int num2[100] ;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        num2[j++] = num1[i];
        num2[j++] = num1[i + n];
    }
    //输出数组
    for (int i = 0; i < 2 * n; i++)
    {
        cout << num2[i] <<" ";
    }
    system("pause");
    return 0;
}