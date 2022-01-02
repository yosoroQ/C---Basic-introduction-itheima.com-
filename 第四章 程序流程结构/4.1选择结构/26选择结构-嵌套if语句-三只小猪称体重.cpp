#include<iostream>
using namespace std;

int main()
{
	//选择结构，多条件的if语句  
	//输三只小猪称体重
	//创建变量 
	int num1=0;
	int num2=0;
	int num3=0;
	
	//输入体重
	cout<<"小猪A的体重"<<endl;
	cin>>num1; 
	cout<<"小猪B的体重"<<endl;
	cin>>num2;
	cout<<"小猪C的体重"<<endl;
	cin>>num3;
	
	cout<<"小猪A的体重为："<<num1<<endl;
	cout<<"小猪B的体重为："<<num2<<endl;
	cout<<"小猪C的体重为："<<num3<<endl;
	
	//判断哪只更重
	//先判断A和B重量
	if(num1>num2)  //A比B重 
	{
		if(num1>num3)  //A比C重
		{
			cout<<"小猪A最重"<<endl;
		}  
		else //c比a重
		{
			cout<<"小猪C最重"<<endl;
		} 
	} 
	else  //B比A重 
	{
		if(num2>num3) //b比C重
		{
			cout<<"小猪B最重"<<endl; 
		} 
		else //c比b重 
		{
			cout<<"小猪C最重"<<endl;
		}
	} 
	return 0;
}
