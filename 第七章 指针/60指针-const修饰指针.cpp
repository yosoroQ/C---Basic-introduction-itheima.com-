#include<iostream>
using namespace std;

int main()
{
	//ָ��    const����ָ��
    //const����ָ��   --- ����ָ��
    //const���γ���   --- ָ�볣��
    //const������ָ�룬�����γ���
    
    int a=100;
	int b=100;
	
	//const���ε���ָ�룬ָ��ָ����Ըģ�ָ��ָ���ֵ�����Ը��� 
	const int *p1=&a;
	p1=&b;  //��ȷ 
    //	*p1=100; ����

    //const���ε��ǳ�����ָ��ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը���
    int*const p2=&a;
    //p2=&b;  ���� 
	*p2=100;  //��ȷ
	
	// const������ָ�������γ���
	const int * const p3=&a;
   //p3=&b;  ���� 
   //*p3=100;  ���� 
	
	
	return 0;
}
