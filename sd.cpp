#include<iostream>
using namespace std;
int math(int n,int a)
{
	int i;
    if (n==1)
    {cout<<n-1;
    return 0;}
    else 
{	for(i=0;i<n;i++)
   {
    cout<<i;
   }
	cout<<endl;
	//int p=i-1;
	while(i-1<a)
	{
	cout<<i-1;
	i++;
	}
	return math(n-1,a);}
}
int main()
{	int a,n;
	cout<<"enter the value of n,a: ";
	cin>>n>>a;
	math(n,a);
	
}

