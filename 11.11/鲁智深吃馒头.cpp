#include<iostream>
using namespace std;
int main() 
{
    int a[100]; 
    for (int i = 0; i < 100; i++) 
    {
        a[i] = 1; // ��ʼֵ��Ϊ 1
    }
    int num = 1; // �Ե���ͷ����������ʼΪ 1
    int count = 0; // ��¼�������� 1��5
    for (int i = 0; num < 100; ++i) 
    {
        count += a[i % 100]; //����ģ�����㣬Ϊ�˱�֤תһȦ����������
        if (count == 5) 
        { 
            a[i % 100] = 0; // ���λ���ϵ��˳�����
            num++; // �Ե���ͷ����+1
            count = 0; // ����һ���˺���������
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