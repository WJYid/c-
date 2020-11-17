#include<iostream>
using namespace std;

struct student 
{
	int number; //学号
	char name;//姓名
	float score[3];//成绩
	float aver;//平均成绩
}stu[10];

struct address
{
	struct student arry[10];
};

//添加学生信息
void add(address *abs)
{
	for (int i = 0; i < 10; i++) {
		cout << "学生" << i + 1 << "的学号:";
		cin >> abs->arry[i].number;
		cout << "学生" << i + 1 << "的姓名:";
		cin >> abs->arry[i].name;
		cout << "学生" << i + 1 << "的成绩:";
		for (int j = 0; j < 3; j++)
		{
			cin >> abs->arry[i].score[j];
		}
	}
}

//求平均成绩
void aver(address *abs)
{
	float sum = 0.0f; //个人总成绩
	for (int i = 0; i < 10; i++)
	{
		sum = 0.0f;
		for (int j = 0; j < 3; j++)
		{
			sum += abs->arry[i].score[j];
		}
		abs->arry[i].aver = sum / 3; //个人平均成绩
		cout << "学生" << i + 1 << "平均成绩：" << sum / 3 <<endl;  
	}
}

//最高成绩及其学生信息
void high(address *abs)
{
	int i = 0, index = 0; //index接收最大值下标
	float max = abs->arry[0].aver; 
	for (i = 1; i < 10; i++)
	{
		if (max < abs->arry[i].aver)
		{
			max = abs->arry[i].aver;
			index = i;
		}
	}
	cout << "最高成绩学生的信息：" << "学号" << abs->arry[index].number << "姓名" << abs->arry[index].name << "成绩";
	for (int j = 0; j < 3; j++) cout << abs->arry[index].score[j] << " ";
	cout << "平均成绩" << max << endl;
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