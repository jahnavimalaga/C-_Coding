#include<iostream>
using namespace std;
int main()
{
	int** p=new int*[4];
	for(int i=0;i<4;i++)
      p[i]=new int[2];

	for(int i=0;i<4;i++)
	{
			cout<<"[ ";
		for(int j=0;j<2;j++)
		{
		p[i][j]=2*j;
		cout<<p[i][j]<<",";
     	}
     	cout<<"]"<<endl;
	}
	for(int i=0;i<4;i++)
	  delete[] p[i];
	delete[] p;
	
//	cout<<" ]"<<endl;
}
