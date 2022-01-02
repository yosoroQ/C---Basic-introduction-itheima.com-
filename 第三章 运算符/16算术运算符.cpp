#include<iostream>
using namespace std;

int main()
{
	//算术运算符（+-*/） 
	int a1=10;
	int b1=3;
	cout<<a1+b1<<endl;
	cout<<a1-b1<<endl;
	cout<<a1*b1<<endl;
	cout<<a1/b1<<endl; //(int)两个整数相除结果依然是整数，将小数部分去除
	
	int a2=10;
	int b2=20;
	cout<<a2/b2<<endl; //本是0.5,但因int是整型输入，所以输出为0，将小数部分去除。 
	
	//int a3=10;
	//int b3=0;
	//cout<<a3/b3<<endl; //dev不知道为什么没有报错，在VS中会报错，除数不可以为0 
	
	// 两个小数可以相除(double)
	double d1=0.5;
	double d2=0.25;
	cout<<d1/d2<<endl;   //运算的结果也可以是小数
	
	
	return 0;
}
