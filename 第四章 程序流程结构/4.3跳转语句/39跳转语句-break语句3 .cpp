#include<iostream>
using namespace std;

int main()
{
	//跳转语句 break语句 
	//出现在嵌套循环中，跳出最近的内层循环语句
	//在嵌套循环语句中用break 
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<=10;j++)
		{
			if(j==5)
			{
				break;
			}
			cout<<"※"<<"  ";
		}
		cout<<endl;
	} 
	
	return 0;
}
