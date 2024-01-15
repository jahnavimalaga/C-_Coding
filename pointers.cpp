#include<iostream>
using namespace std;
int main()
{
  int p[3]={1,2,3};
  int* ptr;
  ptr=&p[0];//ptr=p; is also correct
  for(int i=0;i<3;i++)
  {
    cout<<"address of"<<" "<<i<<" "<<"using array is:"<<'\t'<<p+i<<'\n';
  }	
  for(int i=0;i<3;i++)
  {
    cout<<"address of"<<" "<<i<<" "<<"using pointers is:"<<'\t'<<ptr+i<<'\n';
  }	
}
