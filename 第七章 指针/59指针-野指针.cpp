#include<iostream>
using namespace std;

int main()
{
	//�ܽ᣺��ָ���Ұָ�붼������������Ŀռ䣬��˲�Ҫ���ʡ� 
	//ָ��    Ұָ��
    //ָ�����pָ���ڴ��ַ���Ϊ0x1100�Ŀռ�
    int *p=(int *)0x1100;
    
    //����Ұָ�뱨�� 
    cout<<*p<<endl;
	
	
	return 0;
}
