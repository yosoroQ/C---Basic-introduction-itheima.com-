#include<iostream>
using namespace std;

int main()
{
	//总结：空指针和野指针都不是我们申请的空间，因此不要访问。 
	//指针    野指针
    //指针变量p指向内存地址编号为0x1100的空间
    int *p=(int *)0x1100;
    
    //访问野指针报错 
    cout<<*p<<endl;
	
	
	return 0;
}
