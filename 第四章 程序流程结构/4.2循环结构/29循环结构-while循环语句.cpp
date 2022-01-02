#include<iostream>
using namespace std;

int main()
{
	//循环结构 while循环 
	//在执行循环语句时候，程序必须提供跳出循环的出口，否则出现死循环 
	int num1=0;
	
	//while()中填入循环条件
	while(num1<10)
	{
		cout<<"num1="<<num1<<endl;
		num1++;
	} 
	
	return 0;
}
