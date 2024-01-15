#include<iostream>
#include<typeinfo>
using namespace std;
template<class T>
T fun(T a)
{
	cout<<typeid(a).name()<<endl;
	
}
int main()
{
	fun<int>(3);
	fun<char>('t');
	
}
