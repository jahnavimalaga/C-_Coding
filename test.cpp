#include<iostream>
using namespace std;
int a=9;
int& func(int& x)
{
	x=x+2;
	return x;
}
int main()
{
int p=97;
char c;
c=(char)p;
cout<<"c:"<<c<<endl;

}
