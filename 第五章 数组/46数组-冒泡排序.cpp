#include<iostream>
using namespace std;

int main()
{
	//数组 一维数组
	//冒泡排序 
	// 将数组 { 4,2,8,0,5,7,1,3,9 } 进行升序排序
	
	int arr[9] = {4,2,8,0,5,7,1,3,9};
	
	//总共排序轮数为元素个数-1
	for (int i=0;i<9-1;i++)
	{
		//内层循环对比次数=元素个数-当前轮数-1
		for (int j=0;j<9-1-i;j++)
		{
			//如果第一个数字，比第二个数字大，交换两个数字
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for(int i=0;i<9;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
