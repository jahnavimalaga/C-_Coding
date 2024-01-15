#include<iostream>
#include<cmath>
using namespace std;
int a,b,d=0,c=0;
int main()
{
	cout<<"enter a decimal no:"<<endl;
	cin>>a;
	while (a>=1)
	{
		b=a%2;
	    a=a/2;
	  
	  c=c+b*(pow(10,d));
	  d=d+1;
	}
	if (a<0)
	{
		cout<<"entered no is not a whole no"<<endl;
	}
	else
	{
	   cout<<"binary value is:"<<c<<endl;
    }
}

