#include<iostream>
using namespace std;
    
	//����  (Ҫд��main��������)
	//�����ĵ��� 
	
	
	//�����е�num1,num2��Ϊ��ʽ����������β�
int add(int num1, int num2)
{
	int sum=num1+num2;
	return sum;
}

int main()
{
	int a=10;
	int b=20;
	int sum=add(a,b);   //����ʱ��a��b��Ϊʵ�ʲ��������ʵ��
	cout<<"sum="<<sum<<endl;
	
	a=100; 
	b=100;
	sum=add(a,b);
	cout<<"sum="<<sum<<endl;		

	return 0;
}
