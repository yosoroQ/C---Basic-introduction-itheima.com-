#include<iostream>
using namespace std;
    
	//函数  (要写在main函数外面)
	//值传递 
	//定义中的num1,num2称为形式参数，简称形参
	//所谓值传递，就是函数调用时实参将数值传入给形参
	// 如果形参发生，并不会影响实参
void swap(int num1, int num2)
{
	cout<<"交换前"<<endl; 
	cout<<"num1="<<num1<<endl; 
	cout<<"num2="<<num2<<endl; 
	int temp=num1;
	num1=num2;
	num2=temp;
	
	cout<<"交换后"<<endl; 
	cout<<"num1="<<num1<<endl; 
	cout<<"num2="<<num2<<endl; 
	//return ; 当函数声明时候，不需要返回值，可以不写return
	return;
}

int main()
{
	int a=10;
	int b=20;
	swap(a,b);
	cout<<"main的a="<<a<<endl; 
	cout<<"main的b="<<b<<endl; 

	return 0;
}
