#include<iostream>
using namespace std;
#include<string> //C++风格字符串，需要加入头文件#include<string>

int main()
{
	//字符串型
    //c风格字符串  char 变量名[] = "字符串值"
	char str[]="hello world";
	cout<<str<<endl;
	
	//c++风格字符串  string  变量名 = "字符串值"
	string str2="hello world";
	cout<<str2<<endl;
	
	return 0;
}
