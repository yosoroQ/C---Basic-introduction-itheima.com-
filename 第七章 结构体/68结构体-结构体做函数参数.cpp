#include<iostream>
using namespace std;

   //�ṹ��   �ṹ������������
   //���ṹ����Ϊ���������д���
   //ֵ����  ��ַ����
   //��������޸��������е����ݣ���ֵ���ݣ���֮�õ�ַ���� 

//ѧ���ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;
	int age;
	int score; 
};

//ֵ����
void printStudent(student stu)
{
	stu.age=30;
	cout<<"�Ӻ��� ������ "<<stu.name<<"�Ӻ��� ���䣺 "<<stu.age<<"�Ӻ��� ������ "<<stu.score<<endl;
} 

//��ַ����
void printStudent2(student *stu)
{
	stu->age=60;
	cout<<"�Ӻ���2 ������ "<<stu->name<<"�Ӻ���2 ���䣺 "<<stu->age<<"�Ӻ���2 ������ "<<stu->score<<endl;
}


int main()
{
   student stu={"�ŷ�",40,80};
   //ֵ����
   printStudent(stu);
  cout<<"������ ������ "<<stu.name<<"������ ���䣺 "<<stu.age<<"������ ������ "<<stu.score<<endl;  
   cout<<endl;
   
   //��ַ����
   printStudent2(&stu);
     cout<<"������2 ������ "<<stu.name<<"������2 ���䣺 "<<stu.age<<"������2 ������ "<<stu.score<<endl;  
      cout<<endl;
   
	return 0;
}
