#include<iostream>
using namespace std;

int main()
{
	//循环结构  for循环语句 
	//敲桌子 
	//先输出1~100数字 
	for(int i=1; i<=100; i++) 
	{
		//从100个数字找到特殊数字，打印“敲桌子”
		//7的倍数，个位有7或 十位有7 
		if(i%7 == 0 || i%10 == 7 || i/10 == 7 )
		{
			cout<<"敲桌子"<<endl;
		}
		else
		{
			cout<<i<<endl;
		} 
		
	}
	
	return 0;
}
