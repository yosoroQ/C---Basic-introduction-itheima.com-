#include<iostream>
using namespace std;

int main()
{
	//��ת��� continue��� 
	//��ѭ������У���������ѭ����������δִ�е���䣬����ִ����һ��ѭ��
	//continue ��������ǰѭ���еĴ��룬ǿ�ȿ�ʼ��һ��ѭ����
	for(int i=0;i<100;i++)
	{
		if(i%2==0) //���������ż���������i%2��ż���� 
		{
			continue; //continue����ɸѡ���� 
		}
		cout<<i<<endl;
	} 
	
	return 0;
}
