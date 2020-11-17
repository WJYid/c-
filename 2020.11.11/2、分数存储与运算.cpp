#include<iostream>
#include<cmath>
using namespace std;

struct fs
{
	int fz; //����
	char line; //������
	int fm; //��ĸ
};
struct ffs
{
	struct fs num[2];
};


//������
void add(struct fs a, struct fs b)
{
	if (a.fm == b.fm)
		cout << "������Ϊ��" << a.fz + b.fz << a.line << a.fm << endl;
	else if (a.fm % b.fm == 0)
		cout << "������Ϊ��" << a.fz + b.fz * a.fm / b.fm << a.line << a.fm << endl;
	else if (b.fm % a.fm == 0)
		cout << "������Ϊ��" << a.fz * b.fm / a.fm + b.fz << a.line << b.fm << endl;
	else cout << "������Ϊ��" << a.fz * b.fm + b.fz * a.fm << a.line << a.fm * b.fm << endl;

}

//�����˻�
void mul(struct fs a, struct fs b)
{
	if (a.fz == 0 || b.fz == 0)
		cout << "�����˻�Ϊ��" << 0;
	else if (a.fz * a.fm * b.fz * b.fm < 0)
		cout << "�����˻�Ϊ��" << -abs(a.fz * b.fz) << a.line << abs(a.fm * b.fm);
	else cout << "�����˻�Ϊ��" << abs(a.fz * b.fz) << a.line << abs(a.fm * b.fm);
}
int main()
{
	fs a, b;
	cout << "����a:";
	cin >> a.fz >> a.line >> a.fm;
	cout << "����b:";
	cin >> b.fz >> b.line >> b.fm;
	if (a.fm == 0 || b.fm == 0)
	{
		cout << "��ĸ����Ϊ0��";
		system("pause");
		return 0;
	}
	add(a, b);
	mul(a, b);
	system("pause");
	return 0;
}