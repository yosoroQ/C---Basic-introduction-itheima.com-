#include<iostream>
using namespace std;

int main()
{
	//跳转语句 break语句 
	//switch条件语句中，作用是终止case并跳出switch 
	cout<<"1.普通"<<endl;
	cout<<"2.中等"<<endl;
	cout<<"3.困难"<<endl;
	
	int num=0;
	cin>>num;
	
	switch (num) 
	{
		case 1:
			cout<<"你选择的是普通难度"<<endl; 
			break;
		case 2:
			cout<<"你选择的是中等难度"<<endl;
			break;
		case 3:
			cout<<"你选择的是困难难度"<<endl;
			break;
	}
	
	return 0;
}
