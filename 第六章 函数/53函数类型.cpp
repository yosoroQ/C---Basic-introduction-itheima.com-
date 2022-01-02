#include<iostream>
using namespace std;
    
	//函数  (要写在main函数外面)
	//函数的四种类型 
	//1. 无参无返     2. 有参无返  3. 无参有返   	4. 有参有返
	
	//1.无参无返
	void test01()
{
	cout<<"这是test01"<<endl; 
}

   //2.有参无返
void test02(int a)
{
    cout<<"这是test02 a="<<a<<endl; 
}

  //3.无参有返 
int test03()
{
	cout<<"这是test03"<<endl; 
	return 1000;
}
	
	//4.有参有返
int test04(int a)
{
	cout<<"这是test04"<<a<<endl; 
	return a;
}

 
int main()
{
//1.无参无返 的函数调用
test01();

//2.有参无返  的函数调用
test02(100);

//3.无参有返 的函数调用
int num1=test03();
cout<<"num1="<<num1<<endl;

//4.有参有返的函数调用
int num2=test04(10000); 
cout<<"num2="<<num2<<endl;
 
	return 0;
}
