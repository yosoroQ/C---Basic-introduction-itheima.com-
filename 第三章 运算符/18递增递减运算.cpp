#include<iostream>
using namespace std;

int main()
{
	//����������������ݼ����㣩��++ --�� 
	//ǰ�õ���  �ȶԱ�������+1���ټ�����ʽ
	int a1=10;
	int b1=++a1*10;
	cout<<b1<<endl;  //���110 
	
    //ǰ�õݼ� �ȼ�����ʽ���ٶԱ�������-1 
	int a2=10;
	int b2=a2++*10;
	cout<<b2<<endl;  //���100
	
	//ͬ��ǰ�õݼ��ͺ��õݼ�Ҳһ�� 
    
	return 0;
}
