#include<iostream>
using namespace std;

int main()
{
	//���� һά����������  
	//����Ԫ������
	//������һ��5��Ԫ�ص����飬���ҽ�Ԫ������.
	//ԭ����Ԫ��Ϊ��1,3,2,5,4;���ú�������Ϊ:4,5,2,3,1);
	
	//�������� 
	int arr[5] = {1,3,2,5,4};
	cout<<"��������ǰ��"<<endl;
	for (int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	//ʵ�� ����
	int start=0;//��ʼ�±�
	int end=sizeof(arr)/sizeof(arr[0]) -1;//�����±�
	
	while(start<end)
	{
		//ʵ��Ԫ�ػ���
		int temp=arr[start];
		arr [start]=arr[end];
		arr[end]=temp;
		
		//�±����
		start++;
		end--; 
	}
	
	//��ӡ  ���ú������ 
	cout<<"���ú������ ��"<<endl;
	for (int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	return 0;
}
