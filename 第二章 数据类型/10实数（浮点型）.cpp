#include<iostream>
using namespace std;

int main()
{
	//浮点型变量
	//1. 单精度float 2.双精度double
	//默认情况下，输出一个小数，会显示6位有效数字 
    
	float f1=3.1415926f;  //加个f，告诉它这是一个单精度float, 否则默认识别成dobule数据类型。 
	cout<<"f1="<<f1<<endl;
	
	double d1=3.1415926;
	cout<<"d1="<<d1<<endl;
	
	//统计float和double占用内存空间 
	cout<<"float占用内存空间为："<<sizeof(float)<<endl; //4字节 
	cout<<"double占用内存空间为："<<sizeof(double)<<endl;  //8字节 
	
	//科学计数法（少用）
	float f2=3e2;  //3*10^2 
	cout<<"f2=："<<f2<<endl; 
	
	float f3=3e-2;  //3*0.1^2 
	cout<<"f3=："<<f3<<endl; 
	
	return 0;
}
