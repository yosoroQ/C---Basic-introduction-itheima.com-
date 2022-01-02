#include <iostream>
using namespace std;

int main() 
{
	int a, b,c,max;
	cout<<"a=";cin>>a; 
	cout<<"b=";cin>>b; 
	cout<<"c=";cin>>c; 
	max=a;
	if(b>max)max=b;
    if(c>max)max=c;
    cout<<"max="<<max;
	
}
