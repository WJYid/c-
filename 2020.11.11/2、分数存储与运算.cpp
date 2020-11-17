#include<iostream>
#include<cmath>
using namespace std;

struct fs
{
	int fz; //分子
	char line; //分数线
	int fm; //分母
};
struct ffs
{
	struct fs num[2];
};


//两数和
void add(struct fs a, struct fs b)
{
	if (a.fm == b.fm)
		cout << "两数和为：" << a.fz + b.fz << a.line << a.fm << endl;
	else if (a.fm % b.fm == 0)
		cout << "两数和为：" << a.fz + b.fz * a.fm / b.fm << a.line << a.fm << endl;
	else if (b.fm % a.fm == 0)
		cout << "两数和为：" << a.fz * b.fm / a.fm + b.fz << a.line << b.fm << endl;
	else cout << "两数和为：" << a.fz * b.fm + b.fz * a.fm << a.line << a.fm * b.fm << endl;

}

//两数乘积
void mul(struct fs a, struct fs b)
{
	if (a.fz == 0 || b.fz == 0)
		cout << "两数乘积为：" << 0;
	else if (a.fz * a.fm * b.fz * b.fm < 0)
		cout << "两数乘积为：" << -abs(a.fz * b.fz) << a.line << abs(a.fm * b.fm);
	else cout << "两数乘积为：" << abs(a.fz * b.fz) << a.line << abs(a.fm * b.fm);
}
int main()
{
	fs a, b;
	cout << "分数a:";
	cin >> a.fz >> a.line >> a.fm;
	cout << "分数b:";
	cin >> b.fz >> b.line >> b.fm;
	if (a.fm == 0 || b.fm == 0)
	{
		cout << "分母不能为0！";
		system("pause");
		return 0;
	}
	add(a, b);
	mul(a, b);
	system("pause");
	return 0;
}