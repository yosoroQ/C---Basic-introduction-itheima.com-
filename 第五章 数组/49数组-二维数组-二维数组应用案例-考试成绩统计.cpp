#include<iostream>
using namespace std;

int main()
{
	//���� ��ά����
	//��ά����Ӧ�ð���
	//���Գɼ�ͳ��
	int scores[3][3]=
	{
		{100,200,300},
		{40,50,60},
		{100,50,60},
	}; 
	
	string names[3]={"ը���Ϸ�","fsad","���ٶ�"};
	for (int i=0; i<3;i++)
	{
		int sum=0;
		for (int j=0; j<3;j++)
		{
			sum+=scores[i][j];
		}
		cout<<names[i]<<"ͬѧ�ܳɼ�Ϊ��"<<sum<<endl; 
	}
	

	return 0;
}
