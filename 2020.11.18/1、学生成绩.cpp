#include<iostream>
using namespace std;
struct student
{
	int num;//ѧ��
	float score[5];//�ɼ�
	float aver;//ƽ���ɼ�
};

//��һ��ƽ����
void fristAver(student *stu)
{
	float f_sum = 0.0f;
	for (int i=0;i<4;i++)
		f_sum += stu[i].score[0];
	cout << "��һ�ųɼ���ƽ����Ϊ��" << f_sum / 4 << endl;
}

//�������Ͽγ̲������ѧ��
void two_fail(student *stu)
{
	cout << "�������Ͽγ̲������ѧ��:"<<endl;
	for (int i = 0; i < 4; i++)
	{
		int count = 0;
		for (int j = 0; j < 5; j++)
		{
			if (stu[i].score[j] < 60)
				count++;
		}
		if (count >= 2)
		{
			cout << "ѧ��" << i + 1 << "��ѧ��:" << stu[i].num << " " << "���гɼ�:";
			for (int j = 0; j < 5; j++) cout << stu[i].score[j] << " ";
			cout << "ƽ���ɼ�:" << stu[i].aver << endl;
		}
	}
}

//ƽ���ɼ���90���ϻ�ȫ���γ���85�����ϵ�ѧ��
void high(student* stu)
{
	cout << "ƽ���ɼ���90���ϻ�ȫ���γ���85�����ϵ�ѧ����"<<endl;
	for (int i = 0; i < 4; i++)
	{
		int count = 0;
		if (stu[i].aver > 90)
			cout << "ѧ��" << i + 1 << "��ѧ�ţ�" << stu[i].num << endl;
		else 
		{
			for (int j = 0; j < 5; j++)
			{
				if (stu[i].score[j] > 85)
					count++;
			}
			if (count == 5) cout << "ѧ��" << i + 1 << "��ѧ�ţ�" << stu[i].num << endl;
		}
	}
}

int main() 
{
	struct student stu[4];
	for (int i = 0; i < 4; i++) 
	{
		cout << "ѧ��" << i + 1 << "��ѧ��:";
		cin >> stu[i].num;
		cout << "ѧ��" << i + 1 << "�ĳɼ�:";
		float sum = 0.0f; //�ܳɼ�
		for (int j = 0; j < 5; j++)
		{
			cin >> stu[i].score[j];
			sum += stu[i].score[j] ;
		}
		stu[i].aver = sum / 5;
	}
	fristAver(stu);
	two_fail(stu);
	high(stu);
	system("pause");
	return 0;
}