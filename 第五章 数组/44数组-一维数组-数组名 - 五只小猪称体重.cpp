#include<iostream>
using namespace std;

int main()
{
	//数组 一维数组数组名  
	//五只小猪称体重
	int arr[5] = {300,350,200,700,250};
	
	///从数组中找到最大值
	int max=0; //先认定一个最大值为0
	for (int i=0;i<5;i++)
	{
		//如果访问的数组中的元素比我认定的最大值还大，更新最大值
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	
	cout<<"最重的小猪体重为："<<max<<endl;
	
	return 0;
}
