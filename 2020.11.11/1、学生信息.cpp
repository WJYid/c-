#include<iostream>
using namespace std;

struct student 
{
	int number; //ѧ��
	char name;//����
	float score[3];//�ɼ�
	float aver;//ƽ���ɼ�
}stu[10];

struct address
{
	struct student arry[10];
};

//���ѧ����Ϣ
void add(address *abs)
{
	for (int i = 0; i < 10; i++) {
		cout << "ѧ��" << i + 1 << "��ѧ��:";
		cin >> abs->arry[i].number;
		cout << "ѧ��" << i + 1 << "������:";
		cin >> abs->arry[i].name;
		cout << "ѧ��" << i + 1 << "�ĳɼ�:";
		for (int j = 0; j < 3; j++)
		{
			cin >> abs->arry[i].score[j];
		}
	}
}

//��ƽ���ɼ�
void aver(address *abs)
{
	float sum = 0.0f; //�����ܳɼ�
	for (int i = 0; i < 10; i++)
	{
		sum = 0.0f;
		for (int j = 0; j < 3; j++)
		{
			sum += abs->arry[i].score[j];
		}
		abs->arry[i].aver = sum / 3; //����ƽ���ɼ�
		cout << "ѧ��" << i + 1 << "ƽ���ɼ���" << sum / 3 <<endl;  
	}
}

//��߳ɼ�����ѧ����Ϣ
void high(address *abs)
{
	int i = 0, index = 0; //index�������ֵ�±�
	float max = abs->arry[0].aver; 
	for (i = 1; i < 10; i++)
	{
		if (max < abs->arry[i].aver)
		{
			max = abs->arry[i].aver;
			index = i;
		}
	}
	cout << "��߳ɼ�ѧ������Ϣ��" << "ѧ��" << abs->arry[index].number << "����" << abs->arry[index].name << "�ɼ�";
	for (int j = 0; j < 3; j++) cout << abs->arry[index].score[j] << " ";
	cout << "ƽ���ɼ�" << max << endl;
}

int main() 
{
	address abs;
	add(&abs);
	aver(&abs);
	high(&abs);
	system("pause");
	return 0;
}