#include<iostream>
using namespace std;
#include<ctime>  //time系统时间头文件包含 

int main()
{
	//循环结构 while循环 
	//猜数字 
	//添加随机数种子。利用当前系统时间生成随机数，防止每次生成随机数一样
	srand((unsigned int)time(NULL)); 
	
	//系统生成随机数
	int num=rand()%100+1; 
	
	//玩家进行猜测
	int val=0;
	
	while(1)
	{
		
	
	cin>>val; 
	
	//判断玩家的猜测
	if(val>num)
	{
		cout<<"猜测过大"<<endl;
	}
	 else if(val<num)
	 {
	 	cout<<"猜测过小"<<endl;
	 }
	 else
	 {
	 	cout<<"恭喜您猜对了"<<endl; 
	 }
	 }
	return 0;
}
