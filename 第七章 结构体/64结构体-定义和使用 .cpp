#include<iostream>
using namespace std;

   //�ṹ��
   //�����û��Զ�����������ͣ������û��洢��ͬ����������
   //�﷨��struct �ṹ���� { �ṹ���Ա�б� }��`
   // struct �ṹ���� ������
   //struct �ṹ���� ������ = { ��Ա1ֵ �� ��Ա2ֵ...}
   //����ṹ��ʱ˳�㴴������

//�ṹ�嶨��
struct student
{
	//��Ա�б�
	string name;
	int age;
	int score; 
}stu3;  //�ṹ�����������ʽ3 

int main()
{
	//�ṹ�����������ʽ1
	struct student stu1;  //struct �ؼ��ֿ���ʡ��
	
	stu1.name="amy";
	stu1.age=36;
	stu1.score=67;
	cout<<"����:"<<stu1.name<<"����:"<<stu1.age<<"����:"<<stu1.score<<endl;
	
	//�ṹ�����������ʽ2
	struct student stu2={"����",37,77};
	cout<<"����:"<<stu2.name<<"����:"<<stu2.age<<"����:"<<stu2.score<<endl;
	
	//�ṹ�����������ʽ3
	stu3.name="geee";
	stu3.age=36;
	stu3.score=67;
	cout<<"����:"<<stu3.name<<"����:"<<stu3.age<<"����:"<<stu3.score<<endl;
	
	return 0;
}
