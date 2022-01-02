#include<iostream>
using namespace std;

   //结构体   结构体中 const使用场景
   //用const来防止误操作

//学生结构体定义
struct student
{
	//成员列表
	string name;
	int age;
	int score; 
};

//const使用场景 
void printStudent(const student *stu)  // 加const防止函数体中的误操作
{
	//stu->age=30;  操作失败，因为加了const修饰
	cout<<"子函数 姓名： "<<stu->name<<"子函数 年龄： "<<stu->age<<"子函数 分数： "<<stu->score<<endl;
} 


int main()
{
   student stu={"张飞",40,80};
   //值传递
   printStudent(&stu);
 
	return 0;
}
