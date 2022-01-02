#include<iostream>
using namespace std;

int main()
{
	//字符型 
	//字符型变量创建方法 
    char ch='a';
	cout<<ch<<endl;
	
	//字符型变量所占内存大小 
	cout<<"char字符型变量占用内存空间为："<<sizeof(char)<<endl; //1字节 

	//字符型变量常见错误 
	//char ch2="b"; //要使用单引号
	//char ch2='abcd'; //只能有一个字符，不能是字符串 
	
    //字符型变量对应ASCII编码
    //a:97
    //A:65
	cout<<(int)ch<<endl; //97
	
	return 0;
}
