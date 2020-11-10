#include<iostream>
using namespace std;
int main() 
{
    int a[100]; 
    for (int i = 0; i < 100; i++) 
    {
        a[i] = 1; // 初始值都为 1
    }
    int num = 1; // 吃到馒头的人数，起始为 1
    int count = 0; // 记录数的数字 1～5
    for (int i = 0; num < 100; ++i) 
    {
        count += a[i % 100]; //利用模数运算，为了保证转一圈后索引不变
        if (count == 5) 
        { 
            a[i % 100] = 0; // 这个位置上的人出列了
            num++; // 吃到馒头人数+1
            count = 0; // 出列一个人后，重新数数
        }
    }
    for (int i = 0; i < 100; i++) 
    {
        if (a[i])
            cout << i + 1 << endl; 
    }
    system("pause");
    return 0;
}