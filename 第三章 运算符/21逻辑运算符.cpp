#include<iostream>
using namespace std;

int main()
{
	//�߼������
	//�� �� (�췴)
    int a=4;
	cout<<!a<<endl; //���aΪ�٣���!aΪ�棻  ���aΪ�棬��!aΪ�١�
	cout<<!!a<<endl; 
	 
	//�� && ��ȫ��Ҫ��
	int a1=10;
	int b1=10;
	cout<<(a1&&b1) <<endl;   
	
	a1=0;
	b1=10;
	cout<<(a1&&b1) <<endl; 
	
	//�� || (ͬ��Ϊ�٣�����Ϊ��) (��һ���棬������)
	int a2=10;
	int b2=10;
	cout<<(a2||b2)<<endl; 
	
	a2=10;
	b2=0;
	cout<<(a2||b2)<<endl;
	
	a2=0;
	b2=0;
	cout<<(a2||b2)<<endl;
	
	return 0;
}
