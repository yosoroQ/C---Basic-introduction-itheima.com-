#include<iostream>
using namespace std;

int main()
{
	//选择结构，单行if语句
	//输入一个分数，如果分数大于600分，视为考上一本大学，并在屏幕上打印
	int score=0;
	cout<<"请输入分数："<<endl;
	cin>>score;   //cin数据的输入
	cout<<"您输入的分数："<<score<<endl;  
	 
	//大于600.输出 "我考上了一本大学"，小于600，不输出，输出上一行 "您输入的分数："。
	//注意事项，在if判断语句后面，不要加分号 
	if(score>600)
	{
		cout<<"我考上了一本大学"<<endl; 
	}
	return 0;
}
