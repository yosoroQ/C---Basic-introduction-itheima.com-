#include<iostream>
using namespace std;

   //结构体   结构体嵌套结构体
   //结构体中的成员可以是另一个结构体
   //**例如：**每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体

//学生结构体定义
struct student
{
	//成员列表
	string name;
	int age;
	int score; 
};

//老师结构体定义
struct teacher
{
	//成员列表
	string name;
	int id;
	int age;
	struct student stu; //子结构体学生 
};

int main()
{
    struct teacher t1;
    t1.id=34343;
    t1.name="老王";
    t1.age=50;
    
    t1.stu.name="老李";
    t1.stu.age=34;
    t1.stu.score=80;
    
    cout<<"教师编号：  "<<t1.id<<"教师名： "<<t1.name<<"教师年龄： "<<t1.age<<endl; 
    cout<<"学生分数：  "<<t1.stu.score<<"学生名： "<<t1.stu.name<<"学生年龄： "<<t1.stu.age<<endl; 
	
	return 0;
}
