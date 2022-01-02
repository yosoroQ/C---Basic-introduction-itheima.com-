#include<iostream>
using namespace std;

int main()
{
	//数组 二维数组
	//二维数组应用案例
	//考试成绩统计
	int scores[3][3]=
	{
		{100,200,300},
		{40,50,60},
		{100,50,60},
	}; 
	
	string names[3]={"炸鸡南方","fsad","多少度"};
	for (int i=0; i<3;i++)
	{
		int sum=0;
		for (int j=0; j<3;j++)
		{
			sum+=scores[i][j];
		}
		cout<<names[i]<<"同学总成绩为："<<sum<<endl; 
	}
	

	return 0;
}
