#include<iostream>
using namespace std;

int main()
{
	//跳转语句 break语句 
	//出现在循环语句中，作用是跳出当前的循环语句
	//在循环语句中用break 
	for(int i=0;i<10;i++)
	{
		if(i==5)
		{
			break;  //跳出循环语句 
		}
		cout<<i<<endl;
	} 
	
	return 0;
}
