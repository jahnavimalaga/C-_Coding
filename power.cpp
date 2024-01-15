#include<iostream>
using namespace std;
int power(int m,int n)
{
	if (n!=0)
    {
    	return(m*power(m,n-1));
	}
    else
    {
    	return 1;
	}
}
int main()
{int m,n;
	cout<<"enter two no's m,n:";
	cin>>m>>n;
	power(m,n);
	cout<<"the value of m power n is:"<<power(m,n)<<endl;
}
