#include<iostream>
using namespace std;

int main()
{
	//指针    指针变量的定义和使用
	//指针的作用： 可以通过指针间接访问内存
	//内存编号是从0开始记录的，一般用十六进制数字表示
	// 可以利用指针变量保存地址
    
    //指针的定义 
    int a=10;      //定义整型变量a
	
	//语法 ：数据类型 * 变量名 ; 
	int*p;
	
	//指针变量赋值 
	p=&a;        //指针指向变量a地址 
	cout<<"a的地址："<< &a <<endl;     //打印数据a的地址 
	cout<< p <<endl;      //打印指针变量P 

    //2.指针的使用
    //可以通过解引用的方式来找到指针指向的内存
	//指针前加*代表解引用，找到指针指向的内存中的数据
	// 通过*操作指针变量指向的内存
	*p=1000;
	cout<<"a="<<a<<endl;
	cout<<"*p="<<*p<<endl;
	
	return 0;
}
