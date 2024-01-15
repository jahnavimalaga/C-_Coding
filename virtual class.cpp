#include<iostream>
using namespace std;
class A{
	public:
	virtual void y() {z();cout<<"A::y"<<endl;}
    void z(){cout<<"A::z"<<endl;}	
};
class B:public A{
	public:
	void y(){z();cout<<"B::y"<<endl;}
	void z(){cout<<"B::z"<<endl;}
};
int main()
{
	A* a=new B();
	a->y();
	a->z();
	return 0;
}
