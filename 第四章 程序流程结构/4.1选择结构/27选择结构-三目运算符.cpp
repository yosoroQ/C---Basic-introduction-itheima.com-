#include<iostream>
using namespace std;

int main()
{
	//��Ŀ�����
	int a=10;
	int b=20;
	int c=0;
	
	//a��b�Ƚϣ��������ֵ��ֵ������C 
	c=(a>b? a:b);
	cout<<"c="<<c<<endl; 
	
	//��Ŀ��������ص��Ǳ������ɼ�����ֵ
	(a>b? a:b)=100;
	cout<<"a="<<a<<endl; 
	cout<<"b="<<b<<endl; 
	cout<<"c="<<c<<endl; 
	
	return 0;
}
