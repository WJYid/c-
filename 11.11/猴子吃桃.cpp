#include<iostream>
using namespace std;
int main()
{
	int n, i; //n��
	int num = 1;
	int pre;
	cout << "����������";
	cin >> n;
	for (i = 1; i < n; i++)
	{
		pre = (num + 1) * 2;
		num = pre;
	}
	cout << "����������" << num << endl;
	system("pause");
	return 0;
}