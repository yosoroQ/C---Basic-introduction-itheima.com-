#include<iostream>
using namespace std;

int main()
{
	//��ת��� break��� 
	//������Ƕ��ѭ���У�����������ڲ�ѭ�����
	//��Ƕ��ѭ���������break 
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<=10;j++)
		{
			if(j==5)
			{
				break;
			}
			cout<<"��"<<"  ";
		}
		cout<<endl;
	} 
	
	return 0;
}
