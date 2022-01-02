#include<iostream>
using namespace std;

int main()
{
	//算术运算符（递增递减运算）（++ --） 
	//前置递增  先对变量进行+1，再计算表达式
	int a1=10;
	int b1=++a1*10;
	cout<<b1<<endl;  //输出110 
	
    //前置递减 先计算表达式，再对变量进行-1 
	int a2=10;
	int b2=a2++*10;
	cout<<b2<<endl;  //输出100
	
	//同理，前置递减和后置递减也一样 
    
	return 0;
}
