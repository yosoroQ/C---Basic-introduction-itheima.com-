#include<iostream>
using namespace std;
    
	//����  (Ҫд��main��������)
	//ֵ���� 
	//�����е�num1,num2��Ϊ��ʽ����������β�
	//��νֵ���ݣ����Ǻ�������ʱʵ�ν���ֵ������β�
	// ����βη�����������Ӱ��ʵ��
void swap(int num1, int num2)
{
	cout<<"����ǰ"<<endl; 
	cout<<"num1="<<num1<<endl; 
	cout<<"num2="<<num2<<endl; 
	int temp=num1;
	num1=num2;
	num2=temp;
	
	cout<<"������"<<endl; 
	cout<<"num1="<<num1<<endl; 
	cout<<"num2="<<num2<<endl; 
	//return ; ����������ʱ�򣬲���Ҫ����ֵ�����Բ�дreturn
	return;
}

int main()
{
	int a=10;
	int b=20;
	swap(a,b);
	cout<<"main��a="<<a<<endl; 
	cout<<"main��b="<<b<<endl; 

	return 0;
}
