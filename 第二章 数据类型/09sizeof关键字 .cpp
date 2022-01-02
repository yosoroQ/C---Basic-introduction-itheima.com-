#include<iostream>
using namespace std;

int main()
{
	//整型
	//short(短整型)  int(整型) long(长整形) long long(长长整形)
	//利用sizeof关键字可以统计数据类型所占内存大小
	//语法：sizeof( 数据类型 / 变量)
	short num1=20;
	cout<<"short占用内存空间为："<<sizeof(num1)<<endl;
	
	int num2=20;
	cout<<"int占用内存空间为："<<sizeof(int)<<endl;
	
	long num3=20;
	cout<<"long占用内存空间为："<<sizeof(long)<<endl;
	
	long long num4=20;
	cout<<"long long占用内存空间为："<<sizeof(long long)<<endl;
	
	//整型结论(大小比较)：short < int <= long <= long long
	
	return 0;
}
