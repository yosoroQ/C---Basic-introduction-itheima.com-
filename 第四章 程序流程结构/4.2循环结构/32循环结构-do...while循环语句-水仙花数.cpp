#include<iostream>
using namespace std;

int main()
{
	//ѭ���ṹ  do...whileѭ����� 
	//ˮ�ɻ���
	//�ȴ�ӡ������λ�� 
	int num=100;
	
	do
	{
	   //��������λ�������ҵ�ˮ�ɻ���
	   int a=0; //��λ 
	   int b=0; //ʮλ 
	   int c=0; //��λ
	   
	   a=num%10;  //��ȡ���ֵĸ�λ
	   b=num/10 %10; //��ȡ���ֵ�ʮλ
	   c=num/100; //��ȡ���ֵİ�λ
	   
	   if(a*a*a + b*b*b + c*c*c == num) //�����ˮ�ɻ������Ŵ�ӡ 
	   {
	   cout<<num<<endl; 
	   } 
	   	num++;
	}
	while(num<1000);
	
	return 0;
}
