#include<iostream>
using namespace std;

int main()
{
	//循环结构  嵌套循环
	//乘法口诀表 
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j<<"*"<<i<<"="<<j*i<<"  "; 
		}
		cout<<endl;
	}
	
	return 0;
}
