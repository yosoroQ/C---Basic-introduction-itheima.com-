#include<iostream>
using namespace std;

int main()
{
	//数组 一维数组数组名  
	//数组元素逆置
	//请声明一个5个元素的数组，并且将元素逆置.
	//原数组元素为：1,3,2,5,4;逆置后输出结果为:4,5,2,3,1);
	
	//创建数组 
	int arr[5] = {1,3,2,5,4};
	cout<<"数组逆置前："<<endl;
	for (int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	//实现 逆置
	int start=0;//起始下标
	int end=sizeof(arr)/sizeof(arr[0]) -1;//结束下标
	
	while(start<end)
	{
		//实现元素互换
		int temp=arr[start];
		arr [start]=arr[end];
		arr[end]=temp;
		
		//下标更新
		start++;
		end--; 
	}
	
	//打印  逆置后的数组 
	cout<<"逆置后的数组 ："<<endl;
	for (int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	return 0;
}
