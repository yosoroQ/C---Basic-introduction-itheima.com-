#include<iostream>
using namespace std;
#include<ctime>

   //�ṹ��   �ṹ���� constʹ�ó���
   /*
   */

//���Ӣ�۽ṹ��
struct Hero
{
	//����
	string name;
	//����
	int age;
	//�Ա�
	string sex; 
};

//ð������
void bubbleSort(struct Hero heroArray[],int len)
{
	for (int i=0;i<len-1;i++)
	{
		for (int j=0;j<len-i;j++)
		{
			if(heroArray[j].age>heroArray[j+1].age)
			{
				struct Hero temp=heroArray[j];
				heroArray[j]=heroArray[j+1];
				heroArray[j+1]=temp;
			}
		}
	} 
} 

//��ӡ��������Ϣ
void printHero(struct Hero heroArray[],int len)
{
	for (int i=0;i<len;i++)
	{
		cout<<"������  "<<heroArray[i].name<<"���䣺  "<<heroArray[i].age
		<<"�Ա�  "<<heroArray[i].sex<<endl;
	}
}
 
int main()
{
    //����������5��Ӣ��
    struct Hero heroArray[5]=
    {
	   	{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	
	int len=sizeof(heroArray)/sizeof(heroArray[0]);
	//���������������������
	bubbleSort(heroArray,len);
	//�������Ľ�����д�ӡ 
    printHero(heroArray,len);
    
	return 0;
}
