#include<iostream>
using namespace std;
struct Data{
	string name;
	string dob;
	int age;
};
int main()
{
	Data d1;
	d1.name="jahnavi";
	d1.dob="07/08/1998";
	d1.age=19;
	Data*ptr_d1=&d1;
	cout<<"ptr_d1:"<<ptr_d1<<endl;
	cout<<"ptr_d1->name:"<<ptr_d1->name<<endl;
	Data d2={"bhavana","18/05/2004",15};
	cout<<"d1:"<<d1.name<<'\t'<<d1.dob<<'\t'<<d1.age<<endl;
}
