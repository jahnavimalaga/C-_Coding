#include<iostream>
#include<cmath>
using namespace std;
struct random{
	int l,x[10];
	//int ;
};
int fun()
{
	random ran;
	cout<<"enter lambda:"<<endl;
	cin>>ran.l;
//	cout<<"size:"<<endl;
//	cin>>ran.n;
	cout<<"give the sample random variables:"<<endl;
        for(int i=0;i<10;i++){
		cin>>ran.x[i];
	}
	}
int main()
{ 
    random ran;
	int xm=0,xv;
	fun();
	for(int i=0;i<10;i++)
	{
	 xm+=ran.x[i];
	}
	xm=xm/10;
	cout<<"the value of mean:"<<xm<<endl;
}
