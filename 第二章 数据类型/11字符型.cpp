#include<iostream>
using namespace std;

int main()
{
	//�ַ��� 
	//�ַ��ͱ����������� 
    char ch='a';
	cout<<ch<<endl;
	
	//�ַ��ͱ�����ռ�ڴ��С 
	cout<<"char�ַ��ͱ���ռ���ڴ�ռ�Ϊ��"<<sizeof(char)<<endl; //1�ֽ� 

	//�ַ��ͱ����������� 
	//char ch2="b"; //Ҫʹ�õ�����
	//char ch2='abcd'; //ֻ����һ���ַ����������ַ��� 
	
    //�ַ��ͱ�����ӦASCII����
    //a:97
    //A:65
	cout<<(int)ch<<endl; //97
	
	return 0;
}
