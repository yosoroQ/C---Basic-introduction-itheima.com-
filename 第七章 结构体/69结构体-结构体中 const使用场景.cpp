#include<iostream>
using namespace std;

   //�ṹ��   �ṹ���� constʹ�ó���
   //��const����ֹ�����

//ѧ���ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;
	int age;
	int score; 
};

//constʹ�ó��� 
void printStudent(const student *stu)  // ��const��ֹ�������е������
{
	//stu->age=30;  ����ʧ�ܣ���Ϊ����const����
	cout<<"�Ӻ��� ������ "<<stu->name<<"�Ӻ��� ���䣺 "<<stu->age<<"�Ӻ��� ������ "<<stu->score<<endl;
} 


int main()
{
   student stu={"�ŷ�",40,80};
   //ֵ����
   printStudent(&stu);
 
	return 0;
}
