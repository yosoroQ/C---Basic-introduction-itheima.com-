#include<iostream>
using namespace std;

int main()
{
	//switch语句 
	//执行多条件分支语句
	//给电影评分：9~10经典，7~8好，5~6一般，5分以下 烂片
	//switch语句中表达式类型只能是整型或者字符型
	//case里如果没有break，那么程序会一直向下执行
	//与if语句比，对于多条件判断时，switch的结构清晰，执行效率高，缺点是switch不可以判断区间
	
	int score=0;
	cout<<"给电影打分"<<endl;
	cin>>score;
	
	switch(score)
	{
		case 10:
		case 9:
		  cout<<"经典"<<endl;
		  break;
	    case 8:
	    case 7:
	      cout<<"好"<<endl;
	      break;
	    case 6:
	    case 5:
	    	cout<<"一般"<<endl;
	    	break;
	    default:
	    	cout<<"烂片"<<endl;
	    	break;  
	} 

	
	return 0;
}
