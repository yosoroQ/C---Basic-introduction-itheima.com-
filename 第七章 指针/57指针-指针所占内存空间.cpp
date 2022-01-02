#include<iostream>
using namespace std;

int main()
{
	//指针    指针所占内存空间
	//指针也是种数据类型
	//所有指针类型在32位操作系统下是4个字节
	//64位，8个字节 
	
	int a=10;
//	int *p;
//	p=&a;  //指针指向数据a的地址
	int *p=&a;     //这和上面两行是一样的意思 （直接指向） 
	
	cout<<*p<<endl;   //* 解引用
	cout<<"sizeof(int *)"<<sizeof(p)<<endl;   //sizeof(p)也可改为sizeof(int *) 
	cout<<"sizeof(int *)"<<sizeof(char*)<<endl; 
	cout<<"sizeof(int *)"<<sizeof(double*)<<endl; 
	cout<<"sizeof(int *)"<<sizeof(float*)<<endl; 
	
	return 0;
}
