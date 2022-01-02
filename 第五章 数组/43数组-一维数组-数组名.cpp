#include<iostream>
using namespace std;

int main()
{
	//数组 一维数组数组名 
	//1、可以获取整个数组占用内存空间大小
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"整个数组所占内存空间为："<<sizeof(arr) <<endl;
	cout<<"每个元素所占内存空间为："<<sizeof(arr[0]) <<endl;
	cout<<"整个数组所占内存空间为："<<sizeof(arr)/sizeof(arr[0]) <<endl;
	
	//2、可以通过数组名获取到数组首地址
	cout<<"数组首地址为："<<int(arr)<<endl;
	cout<<"数组第一个元素地址为："<<(int)&arr[0]<<endl;
	cout<<"数组第一个元素地址为："<<(int)&arr[1]<<endl;

    //arr=100,不可以，数组名是常量，不可以赋值。 
	return 0;
}
