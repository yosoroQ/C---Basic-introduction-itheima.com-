#include<iostream>
using namespace std;

int main()
{
	//ѭ���ṹ  forѭ����� 
	//������ 
	//�����1~100���� 
	for(int i=1; i<=100; i++) 
	{
		//��100�������ҵ��������֣���ӡ�������ӡ�
		//7�ı�������λ��7�� ʮλ��7 
		if(i%7 == 0 || i%10 == 7 || i/10 == 7 )
		{
			cout<<"������"<<endl;
		}
		else
		{
			cout<<i<<endl;
		} 
		
	}
	
	return 0;
}
