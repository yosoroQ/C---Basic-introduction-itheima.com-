#include<iostream>
using namespace std;

   //结构体   结构体数组 
   //将自定义的结构体放入到数组中方便维护
   //语法：struct  结构体名 数组名[元素个数] = {  {} , {} , ... {} } 

//结构体定义
struct student
{
	//成员列表
	string name;
	int age;
	int score; 
}; 

int main()
{
	//结构体数组
	struct student arr[3]=
	{
		{"张三",18,66},
		{"sdfas",112,111},
		{"sad三",33,44}
	};  
	
	for(int i=0;i<3;i++)
	{
		cout<<"姓名"<<arr[i].name
		<<"年龄"<<arr[i].age<<"分数"<<arr[i].score<<endl;
	}
	
	return 0;
}
