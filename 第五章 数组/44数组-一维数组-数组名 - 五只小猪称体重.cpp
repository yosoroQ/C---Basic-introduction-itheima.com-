#include<iostream>
using namespace std;

int main()
{
	//���� һά����������  
	//��ֻС�������
	int arr[5] = {300,350,200,700,250};
	
	///���������ҵ����ֵ
	int max=0; //���϶�һ�����ֵΪ0
	for (int i=0;i<5;i++)
	{
		//������ʵ������е�Ԫ�ر����϶������ֵ���󣬸������ֵ
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	
	cout<<"���ص�С������Ϊ��"<<max<<endl;
	
	return 0;
}
