#include<iostream>
using namespace std;

   //�ṹ��   �ṹ��ָ��
   //ͨ��ָ����ʽṹ���еĳ�Ա
   //���ò����� ->����ͨ���ṹ��ָ����ʽṹ������

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
	struct student stu={"����",18,66};
    struct student *p=&stu;
    
    p->score=80; //ָ��ͨ�� -> ���������Է��ʳ�Ա*(�ı�ָ���ֵ)
    
    cout<<"������"<<p->name
	<<"���䣺"<<p->age<<"������"<<p->score<<endl;
	
	return 0;
}
