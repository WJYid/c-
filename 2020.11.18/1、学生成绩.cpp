#include<iostream>
using namespace std;
#include<string>

int main()
{
	void fristAver(int [4][5]);
	void two_fail(int [4][5],string [4], int [4], float [4]);
	void high(float [4], int [4][5], string [4],int [4]);
	string name[4] = { "张三","李四","王五","赵六" }; //姓名
	int num[4] = { 11,22,33,44 }; //学号
	int scores[4][5]
	{
		{65,78,56,54,78},
		{89,88,86,90,91},
		{89,99,89,90,87},
		{56,76,89,87,98}
	}; //成绩
	float aver[4];// 平均成绩
	for (int i = 0; i < 4; i++)
	{
		float sum = 0.0f;
		for (int j = 0; j < 5; j++)
			sum += scores[i][j];
		aver[i] = sum / 5;
	}
	fristAver(scores);
	two_fail(scores, name, num, aver);
	high(aver, scores, name, num);
	system("pause");
	return 0;
}

//第一门平均分
void fristAver(int scores[4][5])
{
	float f_sum = 0.0f;
	for (int i = 0; i < 4; i++)
		f_sum += scores[0][i];
	cout << "第一门成绩的平均分为：" << f_sum / 4 << endl;
}

//两门以上课程不及格的学生
void two_fail(int scores[4][5], string name[4], int num[4], float aver[4])
{
	cout << endl;
	cout << "两门以上课程不及格的学生:" << endl;
	for (int i = 0; i < 4; i++)
	{
		int count = 0;
		for (int j = 0; j < 5; j++)
		{
			if (scores[i][j] < 60)
				count++;
		}
		if (count >= 2)
		{
			cout << name[i] << "：学号:" << num[i] << " " << "所有成绩:";
			for (int j = 0; j < 5; j++) cout << scores[i][j] << " ";
				cout << "平均成绩:" << aver[i] << endl;
		}
	}
}

//平均成绩在90以上或全部课程在85分以上的学生
void high(float aver[4], int scores[4][5], string name[4], int num[4])
{
	cout << endl;
	cout << "平均成绩在90以上或全部课程在85分以上的学生：" << endl;
	for (int i = 0; i < 4; i++)
	{
		int count = 0;
		if (aver[i] > 90)
			cout << name[i] << "：学号:"<< num[i] << endl;
		else
		{
			for (int j = 0; j < 5; j++)
			{
				if (scores[i][j] > 85) count++;
			}
			if (count == 5) cout << name[i] << "：学号：" << num[i] << endl;
		}
	}
}
