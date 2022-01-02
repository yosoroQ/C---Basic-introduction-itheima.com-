#include<iostream>
using namespace std;

int main()
{
	//算术运算符（取模运算）% 
	int a1=10;
	int b1=3;
	cout<<a1%b1<<endl; 
	
	int a2=10;
	int b2=20;
	cout<<a2%b2<<endl; //一个数除不过来，那么还是前面那个数，这里输出为10，即a2的值 
	
//	int a3=10;
//	int b3=0;
//	cout<<a3%b3<<endl; // 取模运算时，除数也不能为0,会报错

    // 两个小数不可以取模
    //double d1=3.14;
    //double d2=1.1;
    //cout<<d1%d2<<endl;  //直接报错 
    
    
	return 0;
}
