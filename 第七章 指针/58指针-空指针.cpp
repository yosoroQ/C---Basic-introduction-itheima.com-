#include<iostream>
using namespace std;

int main()
{
	//指针    空指针

    //指针变量p指向内存地址编号为0的空间
    int *p=NULL;
    
    //访问空指针报错 
	//内存编号0 ~255为系统占用内存，不允许用户访问
	//(dev c++中能弹出窗口，但不会出现数值) vs直接报错 
	
    cout<<*p<<endl;
	
	
	return 0;
}
