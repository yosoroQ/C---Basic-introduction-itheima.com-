#include<iostream>
using namespace std;
#include<ctime>  //timeϵͳʱ��ͷ�ļ����� 

int main()
{
	//ѭ���ṹ whileѭ�� 
	//������ 
	//�����������ӡ����õ�ǰϵͳʱ���������������ֹÿ�����������һ��
	srand((unsigned int)time(NULL)); 
	
	//ϵͳ���������
	int num=rand()%100+1; 
	
	//��ҽ��в²�
	int val=0;
	
	while(1)
	{
		
	
	cin>>val; 
	
	//�ж���ҵĲ²�
	if(val>num)
	{
		cout<<"�²����"<<endl;
	}
	 else if(val<num)
	 {
	 	cout<<"�²��С"<<endl;
	 }
	 else
	 {
	 	cout<<"��ϲ���¶���"<<endl; 
	 }
	 }
	return 0;
}
