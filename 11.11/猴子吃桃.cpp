#include<iostream>
using namespace std;
int main()
{
	int n, i; //n天
	int num = 1;
	int pre;
	cout << "输入天数：";
	cin >> n;
	for (i = 1; i < n; i++)
	{
		pre = (num + 1) * 2;
		num = pre;
	}
	cout << "桃子总数：" << num << endl;
	system("pause");
	return 0;
}