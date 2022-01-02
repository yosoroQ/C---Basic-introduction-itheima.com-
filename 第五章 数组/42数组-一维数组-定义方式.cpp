#include<iostream>
using namespace std;

int main()
{
	//数组 一维数组
	//所谓数组，就是一个集合，里面存放了相同类型的数据元素
	/*
	特点1：数组中的每个数据元素都是相同的数据类型
	特点2：数组是由连续的内存位置组成的
	*/
	/*
	定义方式(三种)
	1. 数据类型  数组名[ 数组长度 ]; 
	2. 数据类型  数组名[ 数组长度 ] = { 值1，值2 ...};
	3. 数据类型  数组名[ ] = { 值1，值2 ...};
	*/

//    //定义方式1： 数据类型 数组名[元素个数];
     int score[10];
	
	//利用下标赋值
	score[1]=100; 
	score[2]=99; 
	score[3]=80; 
	
	//利用下标输出
	cout<<score[1]<<endl; 
	cout<<score[2]<<endl; 
	cout<<score[3]<<endl; 
	cout<<"以上是第一种定义方式"<<endl; 
	cout<<"以下是第二种定义方式"<<endl; 
	
	//定义方式2：数据类型  数组名[ 数组长度 ] = { 值1，值2 ...};
	//如果{}内不足10个数据，剩余数据用0补全
	int score2[10]={100,90,80,70,60,50,40,30,20,10};
	
//	cout<<score2[0]<<endl;
//	cout<<score2[1]<<endl;
//	cout<<score2[2]<<endl;
//	cout<<score2[3]<<endl;
//	cout<<score2[4]<<endl;
//	cout<<score2[5]<<endl;
//	cout<<score2[6]<<endl;
//	cout<<score2[7]<<endl;
//	cout<<score2[8]<<endl;
//	cout<<score2[9]<<endl;

    // 一个一个输出太麻烦，因此可以利用循环进行输出
    for(int i=0;i<10;i++)
    {
		cout<<score2[i]<<endl;
	}
	
	cout<<"以下是第三种定义方式"<<endl; 
	//定义方式3：数据类型 数组名[] =  {值1，值2 ，值3 ...};
	int score3[]={100,90,80,70,60,50,40,30,20,10};
	for(int i=0;i<10;i++)
	{
		cout<<score3[i]<<endl;
	}
	return 0;
}
