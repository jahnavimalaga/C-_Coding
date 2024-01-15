#include<iostream>
#include<cmath>
using namespace std;
class Complex{
	private:
		float re;
		float im;
	public:
		Complex();
		Complex(float,float);
		Complex operator+(Complex);
		friend ostream& operator<<(ostream& ost,Complex P);
		
		
};
Complex::Complex()
{
	this->re=0;
	this->im=0;	
}
Complex::Complex(float x,float y)
{
	re=x;
	im=y;	
}
ostream& operator<<(ostream& ost,Complex P)
		{
		  return ost<<P.re<<"+"<<P.im<<"j"<<endl;
		}
Complex Complex::operator+(Complex Z)
{
	Complex res;
	res.re=this->re+Z.re;
	res.im=this->im+Z.im;
	return res;
}
int main()
{
	Complex C1(3,2);
	
	Complex Z1(3,2);
	Complex C2(6,5);
	Complex Z2=C1+C2;
	cout<<"Z1:"<<Z1<<endl;
	cout<<"Z2:"<<Z2<<endl;
	
}
