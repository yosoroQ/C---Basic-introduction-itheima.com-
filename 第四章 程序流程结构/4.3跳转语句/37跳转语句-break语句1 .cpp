#include<iostream>
using namespace std;

int main()
{
	//��ת��� break��� 
	//switch��������У���������ֹcase������switch 
	cout<<"1.��ͨ"<<endl;
	cout<<"2.�е�"<<endl;
	cout<<"3.����"<<endl;
	
	int num=0;
	cin>>num;
	
	switch (num) 
	{
		case 1:
			cout<<"��ѡ�������ͨ�Ѷ�"<<endl; 
			break;
		case 2:
			cout<<"��ѡ������е��Ѷ�"<<endl;
			break;
		case 3:
			cout<<"��ѡ����������Ѷ�"<<endl;
			break;
	}
	
	return 0;
}
