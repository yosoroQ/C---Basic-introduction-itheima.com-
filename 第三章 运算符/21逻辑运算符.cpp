#include<iostream>
using namespace std;

int main()
{
	//逻辑运算符
	//非 ！ (造反)
    int a=4;
	cout<<!a<<endl; //如果a为假，则!a为真；  如果a为真，则!a为假。
	cout<<!!a<<endl; 
	 
	//与 && （全都要）
	int a1=10;
	int b1=10;
	cout<<(a1&&b1) <<endl;   
	
	a1=0;
	b1=10;
	cout<<(a1&&b1) <<endl; 
	
	//或 || (同假为假，其余为真) (有一个真，就是真)
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
