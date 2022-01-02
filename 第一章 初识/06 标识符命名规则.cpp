#include<iostream>
using namespace std;

int main()
{
	//标识符不能是关键字
	//int int=10;
	
	//标识符只能由字母、数字、下划线组成
	//int abc=10;
	//int _abc=10;
	//int _123abc=10; 
	 
	//标第一个字符必须为字母或下划线
	//int 123abc=10;
	
	//标识符中字母区分大小写
	//int aaa=100;
	//cout<<AAA<<endl; //错误，AAA和aaa不是同一个名称
	
	//给变量起名，最好做到见名如意
	 int num1=10;
	 int num2=10;
	 int sum=num1+num2;
	 cout<<sum<<endl;
	 
	return 0;
}
