#include<iostream>
using namespace std;

int main()
{
	//ѡ��ṹ����������if���  
	//����ֻС�������
	//�������� 
	int num1=0;
	int num2=0;
	int num3=0;
	
	//��������
	cout<<"С��A������"<<endl;
	cin>>num1; 
	cout<<"С��B������"<<endl;
	cin>>num2;
	cout<<"С��C������"<<endl;
	cin>>num3;
	
	cout<<"С��A������Ϊ��"<<num1<<endl;
	cout<<"С��B������Ϊ��"<<num2<<endl;
	cout<<"С��C������Ϊ��"<<num3<<endl;
	
	//�ж���ֻ����
	//���ж�A��B����
	if(num1>num2)  //A��B�� 
	{
		if(num1>num3)  //A��C��
		{
			cout<<"С��A����"<<endl;
		}  
		else //c��a��
		{
			cout<<"С��C����"<<endl;
		} 
	} 
	else  //B��A�� 
	{
		if(num2>num3) //b��C��
		{
			cout<<"С��B����"<<endl; 
		} 
		else //c��b�� 
		{
			cout<<"С��C����"<<endl;
		}
	} 
	return 0;
}
