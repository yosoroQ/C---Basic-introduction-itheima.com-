#include<iostream>
using namespace std;

int main()
{
	//�����ͱ���
	//1. ������float 2.˫����double
	//Ĭ������£����һ��С��������ʾ6λ��Ч���� 
    
	float f1=3.1415926f;  //�Ӹ�f������������һ��������float, ����Ĭ��ʶ���dobule�������͡� 
	cout<<"f1="<<f1<<endl;
	
	double d1=3.1415926;
	cout<<"d1="<<d1<<endl;
	
	//ͳ��float��doubleռ���ڴ�ռ� 
	cout<<"floatռ���ڴ�ռ�Ϊ��"<<sizeof(float)<<endl; //4�ֽ� 
	cout<<"doubleռ���ڴ�ռ�Ϊ��"<<sizeof(double)<<endl;  //8�ֽ� 
	
	//��ѧ�����������ã�
	float f2=3e2;  //3*10^2 
	cout<<"f2=��"<<f2<<endl; 
	
	float f3=3e-2;  //3*0.1^2 
	cout<<"f3=��"<<f3<<endl; 
	
	return 0;
}
