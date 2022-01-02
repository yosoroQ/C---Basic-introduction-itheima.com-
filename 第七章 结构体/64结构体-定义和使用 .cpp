#include<iostream>
using namespace std;

   //结构体
   //属于用户自定义的数据类型，允许用户存储不同的数据类型
   //语法：struct 结构体名 { 结构体成员列表 }；`
   // struct 结构体名 变量名
   //struct 结构体名 变量名 = { 成员1值 ， 成员2值...}
   //定义结构体时顺便创建变量

//结构体定义
struct student
{
	//成员列表
	string name;
	int age;
	int score; 
}stu3;  //结构体变量创建方式3 

int main()
{
	//结构体变量创建方式1
	struct student stu1;  //struct 关键字可以省略
	
	stu1.name="amy";
	stu1.age=36;
	stu1.score=67;
	cout<<"姓名:"<<stu1.name<<"年龄:"<<stu1.age<<"分数:"<<stu1.score<<endl;
	
	//结构体变量创建方式2
	struct student stu2={"李四",37,77};
	cout<<"姓名:"<<stu2.name<<"年龄:"<<stu2.age<<"分数:"<<stu2.score<<endl;
	
	//结构体变量创建方式3
	stu3.name="geee";
	stu3.age=36;
	stu3.score=67;
	cout<<"姓名:"<<stu3.name<<"年龄:"<<stu3.age<<"分数:"<<stu3.score<<endl;
	
	return 0;
}
