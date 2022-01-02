#include<iostream>
using namespace std;
    
	//函数  (要写在main函数外面)
	//函数的声明 
	
	//声明
	//声明可以重复，定义只能有一次 
int max(int a,int b);

//定义  有了声明就可以先在main函数前面或者后面。 
int max(int a,int b)
{
	return a>b? a:b;
} 

int main()
{
int a=100;
int b=200;
cout<<max(a,b)<<endl;
 
	return 0;
}
