#include<iostream>
using namespace std;

   //ָ��   ָ�룬���� ������
   //��װһ������������ð������ʵ�ֶ������������������
   //ð��������  ����1 ������׵�ַ  ����2 ���鳤��  
void bubbleSort(int*arr,int len)
 //int * arr Ҳ����дΪint arr[]
{
   for(int i=0;i<len-1;i++)	
   {
   	   for(int j=0;j<len-1-i;j++)
   	   {
		  if(arr[j]>arr[j+1])
		  {
		  	 int temp=arr[j];
		  	 arr[j]=arr[j+1];
			 arr[j+1]=temp; 
		  }	
	   }
   }
} 

//��ӡ���麯��
void printArray(int arr[],int len)
{
	for(int i=0;i<len-1;i++)
	{
		cout<<arr[i]<<endl;
	}
}

int main()
{
	//�������� 
    int arr[10]={4,3,6,9,1,2,10,8,7,5};
    //���鳤�� 
	int len=sizeof(arr) /sizeof(int);
	
	//����������ʵ��ð������ 
	bubbleSort(arr,len);
	//��ӡ���������� 
	printArray(arr,len);
	
	return 0;
}
