#include<iostream>
using namespace std;

   //�ṹ��   �ṹ������ 
   //���Զ���Ľṹ����뵽�����з���ά��
   //�﷨��struct  �ṹ���� ������[Ԫ�ظ���] = {  {} , {} , ... {} } 

//�ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;
	int age;
	int score; 
}; 

int main()
{
	//�ṹ������
	struct student arr[3]=
	{
		{"����",18,66},
		{"sdfas",112,111},
		{"sad��",33,44}
	};  
	
	for(int i=0;i<3;i++)
	{
		cout<<"����"<<arr[i].name
		<<"����"<<arr[i].age<<"����"<<arr[i].score<<endl;
	}
	
	return 0;
}
