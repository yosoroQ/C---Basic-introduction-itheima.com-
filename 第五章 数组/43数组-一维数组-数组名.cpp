#include<iostream>
using namespace std;

int main()
{
	//���� һά���������� 
	//1�����Ի�ȡ��������ռ���ڴ�ռ��С
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"����������ռ�ڴ�ռ�Ϊ��"<<sizeof(arr) <<endl;
	cout<<"ÿ��Ԫ����ռ�ڴ�ռ�Ϊ��"<<sizeof(arr[0]) <<endl;
	cout<<"����������ռ�ڴ�ռ�Ϊ��"<<sizeof(arr)/sizeof(arr[0]) <<endl;
	
	//2������ͨ����������ȡ�������׵�ַ
	cout<<"�����׵�ַΪ��"<<int(arr)<<endl;
	cout<<"�����һ��Ԫ�ص�ַΪ��"<<(int)&arr[0]<<endl;
	cout<<"�����һ��Ԫ�ص�ַΪ��"<<(int)&arr[1]<<endl;

    //arr=100,�����ԣ��������ǳ����������Ը�ֵ�� 
	return 0;
}
