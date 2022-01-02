#include<iostream>
using namespace std;

int main()
{
	//整型
	//short(短整型) (-32768~32767)(超出取值范围返回到最下限-32768)
	short num1=20;
	
	//int(整型) (-2^31 ~ 2^31-1)
	int num2=20;
	
	//long(长整形) (-2^31 ~ 2^31-1)
	long num3=20;
	
	//long long(长长整形) (-2^63 ~ 2^63-1)
	long long num4=20;
	
	cout<<"num1="<<num1<<endl;
	cout<<"num2="<<num2<<endl;
	cout<<"num3="<<num3<<endl;
	cout<<"num4="<<num4<<endl;
	
	return 0;
}
