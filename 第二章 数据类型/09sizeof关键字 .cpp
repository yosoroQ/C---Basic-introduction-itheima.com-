#include<iostream>
using namespace std;

int main()
{
	//����
	//short(������)  int(����) long(������) long long(��������)
	//����sizeof�ؼ��ֿ���ͳ������������ռ�ڴ��С
	//�﷨��sizeof( �������� / ����)
	short num1=20;
	cout<<"shortռ���ڴ�ռ�Ϊ��"<<sizeof(num1)<<endl;
	
	int num2=20;
	cout<<"intռ���ڴ�ռ�Ϊ��"<<sizeof(int)<<endl;
	
	long num3=20;
	cout<<"longռ���ڴ�ռ�Ϊ��"<<sizeof(long)<<endl;
	
	long long num4=20;
	cout<<"long longռ���ڴ�ռ�Ϊ��"<<sizeof(long long)<<endl;
	
	//���ͽ���(��С�Ƚ�)��short < int <= long <= long long
	
	return 0;
}
