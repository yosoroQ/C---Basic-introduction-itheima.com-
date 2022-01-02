#include<iostream>
using namespace std;

   //结构体   结构体做函数参数
   //将结构体作为参数向函数中传递
   //值传递  地址传递
   //如果不想修改主函数中的数据，用值传递，反之用地址传递 

//学生结构体定义
struct student
{
	//成员列表
	string name;
	int age;
	int score; 
};

//值传递
void printStudent(student stu)
{
	stu.age=30;
	cout<<"子函数 姓名： "<<stu.name<<"子函数 年龄： "<<stu.age<<"子函数 分数： "<<stu.score<<endl;
} 

//地址传递
void printStudent2(student *stu)
{
	stu->age=60;
	cout<<"子函数2 姓名： "<<stu->name<<"子函数2 年龄： "<<stu->age<<"子函数2 分数： "<<stu->score<<endl;
}


int main()
{
   student stu={"张飞",40,80};
   //值传递
   printStudent(stu);
  cout<<"主函数 姓名： "<<stu.name<<"主函数 年龄： "<<stu.age<<"主函数 分数： "<<stu.score<<endl;  
   cout<<endl;
   
   //地址传递
   printStudent2(&stu);
     cout<<"主函数2 姓名： "<<stu.name<<"主函数2 年龄： "<<stu.age<<"主函数2 分数： "<<stu.score<<endl;  
      cout<<endl;
   
	return 0;
}
