#include<iostream>
using namespace std;

int main()
{
	//ָ��    ָ����ռ�ڴ�ռ�
	//ָ��Ҳ������������
	//����ָ��������32λ����ϵͳ����4���ֽ�
	//64λ��8���ֽ� 
	
	int a=10;
//	int *p;
//	p=&a;  //ָ��ָ������a�ĵ�ַ
	int *p=&a;     //�������������һ������˼ ��ֱ��ָ�� 
	
	cout<<*p<<endl;   //* ������
	cout<<"sizeof(int *)"<<sizeof(p)<<endl;   //sizeof(p)Ҳ�ɸ�Ϊsizeof(int *) 
	cout<<"sizeof(int *)"<<sizeof(char*)<<endl; 
	cout<<"sizeof(int *)"<<sizeof(double*)<<endl; 
	cout<<"sizeof(int *)"<<sizeof(float*)<<endl; 
	
	return 0;
}
