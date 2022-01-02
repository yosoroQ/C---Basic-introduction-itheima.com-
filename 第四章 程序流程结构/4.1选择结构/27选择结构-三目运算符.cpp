#include<iostream>
using namespace std;

int main()
{
	//三目运算符
	int a=10;
	int b=20;
	int c=0;
	
	//a和b比较，变量大的值赋值给变量C 
	c=(a>b? a:b);
	cout<<"c="<<c<<endl; 
	
	//三目运算符返回的是变量，可继续赋值
	(a>b? a:b)=100;
	cout<<"a="<<a<<endl; 
	cout<<"b="<<b<<endl; 
	cout<<"c="<<c<<endl; 
	
	return 0;
}
