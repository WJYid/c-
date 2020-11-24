#include<iostream>
using namespace std;
struct student
{
	int num;//学号
	float score[5];//成绩
	float aver;//平均成绩
};

//第一门平均分
void fristAver(student *stu)
{
	float f_sum = 0.0f;
	for (int i=0;i<4;i++)
		f_sum += stu[i].score[0];
	cout << "第一门成绩的平均分为：" << f_sum / 4 << endl;
}

//两门以上课程不及格的学生
void two_fail(student *stu)
{
	cout << "两门以上课程不及格的学生:"<<endl;
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
			cout << "学生" << i + 1 << "：学号:" << stu[i].num << " " << "所有成绩:";
			for (int j = 0; j < 5; j++) cout << stu[i].score[j] << " ";
			cout << "平均成绩:" << stu[i].aver << endl;
		}
	}
}

//平均成绩在90以上或全部课程在85分以上的学生
void high(student* stu)
{
	cout << "平均成绩在90以上或全部课程在85分以上的学生："<<endl;
	for (int i = 0; i < 4; i++)
	{
		int count = 0;
		if (stu[i].aver > 90)
			cout << "学生" << i + 1 << "：学号：" << stu[i].num << endl;
		else 
		{
			for (int j = 0; j < 5; j++)
			{
				if (stu[i].score[j] > 85)
					count++;
			}
			if (count == 5) cout << "学生" << i + 1 << "：学号：" << stu[i].num << endl;
		}
	}
}

int main() 
{
	struct student stu[4];
	for (int i = 0; i < 4; i++) 
	{
		cout << "学生" << i + 1 << "的学号:";
		cin >> stu[i].num;
		cout << "学生" << i + 1 << "的成绩:";
		float sum = 0.0f; //总成绩
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