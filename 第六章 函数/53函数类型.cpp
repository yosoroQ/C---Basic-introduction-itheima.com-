#include<iostream>
using namespace std;
    
	//����  (Ҫд��main��������)
	//�������������� 
	//1. �޲��޷�     2. �в��޷�  3. �޲��з�   	4. �в��з�
	
	//1.�޲��޷�
	void test01()
{
	cout<<"����test01"<<endl; 
}

   //2.�в��޷�
void test02(int a)
{
    cout<<"����test02 a="<<a<<endl; 
}

  //3.�޲��з� 
int test03()
{
	cout<<"����test03"<<endl; 
	return 1000;
}
	
	//4.�в��з�
int test04(int a)
{
	cout<<"����test04"<<a<<endl; 
	return a;
}

 
int main()
{
//1.�޲��޷� �ĺ�������
test01();

//2.�в��޷�  �ĺ�������
test02(100);

//3.�޲��з� �ĺ�������
int num1=test03();
cout<<"num1="<<num1<<endl;

//4.�в��з��ĺ�������
int num2=test04(10000); 
cout<<"num2="<<num2<<endl;
 
	return 0;
}
