#include<iostream>
using namespace std;

   //�ṹ��   �ṹ��Ƕ�׽ṹ��
   //�ṹ���еĳ�Ա��������һ���ṹ��
   //**���磺**ÿ����ʦ����һ��ѧԱ��һ����ʦ�Ľṹ���У���¼һ��ѧ���Ľṹ��

//ѧ���ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;
	int age;
	int score; 
};

//��ʦ�ṹ�嶨��
struct teacher
{
	//��Ա�б�
	string name;
	int id;
	int age;
	struct student stu; //�ӽṹ��ѧ�� 
};

int main()
{
    struct teacher t1;
    t1.id=34343;
    t1.name="����";
    t1.age=50;
    
    t1.stu.name="����";
    t1.stu.age=34;
    t1.stu.score=80;
    
    cout<<"��ʦ��ţ�  "<<t1.id<<"��ʦ���� "<<t1.name<<"��ʦ���䣺 "<<t1.age<<endl; 
    cout<<"ѧ��������  "<<t1.stu.score<<"ѧ������ "<<t1.stu.name<<"ѧ�����䣺 "<<t1.stu.age<<endl; 
	
	return 0;
}
