#include<iostream>
using namespace std;

int main()
{
	//switch��� 
	//ִ�ж�������֧���
	//����Ӱ���֣�9~10���䣬7~8�ã�5~6һ�㣬5������ ��Ƭ
	//switch����б��ʽ����ֻ�������ͻ����ַ���
	//case�����û��break����ô�����һֱ����ִ��
	//��if���ȣ����ڶ������ж�ʱ��switch�Ľṹ������ִ��Ч�ʸߣ�ȱ����switch�������ж�����
	
	int score=0;
	cout<<"����Ӱ���"<<endl;
	cin>>score;
	
	switch(score)
	{
		case 10:
		case 9:
		  cout<<"����"<<endl;
		  break;
	    case 8:
	    case 7:
	      cout<<"��"<<endl;
	      break;
	    case 6:
	    case 5:
	    	cout<<"һ��"<<endl;
	    	break;
	    default:
	    	cout<<"��Ƭ"<<endl;
	    	break;  
	} 

	
	return 0;
}
