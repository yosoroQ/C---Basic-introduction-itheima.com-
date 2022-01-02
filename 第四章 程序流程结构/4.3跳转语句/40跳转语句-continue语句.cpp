#include<iostream>
using namespace std;

int main()
{
	//跳转语句 continue语句 
	//在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
	//continue 会跳过当前循环中的代码，强迫开始下一次循环。
	for(int i=0;i<100;i++)
	{
		if(i%2==0) //输出奇数，偶数不输出（i%2是偶数） 
		{
			continue; //continue可以筛选条件 
		}
		cout<<i<<endl;
	} 
	
	return 0;
}
