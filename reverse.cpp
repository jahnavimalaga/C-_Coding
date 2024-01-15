#include<iostream>
#include<cmath>
using namespace std;
int a,rev=0,q,rem;
int main()
{
  cout<<"enter a no:"<<endl;
  cin>>a;
  q=a;
  while (q!=0)
  {
    rem=q%10;
  	q=q/10;
  	rev=rev*10+rem;
  }	
  cout<<"reversed no is:"<<rev<<endl;
}
