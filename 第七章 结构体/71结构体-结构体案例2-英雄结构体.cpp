#include<iostream>
using namespace std;
#include<ctime>

   //结构体   结构体中 const使用场景
   /*
   */

//设计英雄结构体
struct Hero
{
	//姓名
	string name;
	//年龄
	int age;
	//性别
	string sex; 
};

//冒泡排序
void bubbleSort(struct Hero heroArray[],int len)
{
	for (int i=0;i<len-1;i++)
	{
		for (int j=0;j<len-i;j++)
		{
			if(heroArray[j].age>heroArray[j+1].age)
			{
				struct Hero temp=heroArray[j];
				heroArray[j]=heroArray[j+1];
				heroArray[j+1]=temp;
			}
		}
	} 
} 

//打印排序后的信息
void printHero(struct Hero heroArray[],int len)
{
	for (int i=0;i<len;i++)
	{
		cout<<"姓名：  "<<heroArray[i].name<<"年龄：  "<<heroArray[i].age
		<<"性别：  "<<heroArray[i].sex<<endl;
	}
}
 
int main()
{
    //创建数组存放5组英雄
    struct Hero heroArray[5]=
    {
	   	{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	
	int len=sizeof(heroArray)/sizeof(heroArray[0]);
	//对数组进行排序（年龄升序）
	bubbleSort(heroArray,len);
	//对排序后的结果进行打印 
    printHero(heroArray,len);
    
	return 0;
}
