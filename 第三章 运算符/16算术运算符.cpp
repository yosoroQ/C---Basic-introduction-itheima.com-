#include<iostream>
using namespace std;

int main()
{
	//�����������+-*/�� 
	int a1=10;
	int b1=3;
	cout<<a1+b1<<endl;
	cout<<a1-b1<<endl;
	cout<<a1*b1<<endl;
	cout<<a1/b1<<endl; //(int)����������������Ȼ����������С������ȥ��
	
	int a2=10;
	int b2=20;
	cout<<a2/b2<<endl; //����0.5,����int���������룬�������Ϊ0����С������ȥ���� 
	
	//int a3=10;
	//int b3=0;
	//cout<<a3/b3<<endl; //dev��֪��Ϊʲôû�б�����VS�лᱨ������������Ϊ0 
	
	// ����С���������(double)
	double d1=0.5;
	double d2=0.25;
	cout<<d1/d2<<endl;   //����Ľ��Ҳ������С��
	
	
	return 0;
}
