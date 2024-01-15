#include<iostream>
using namespace std;
int q=0;
int main()
{
	for(int i=1000;i<2000;i++)
	{
		if (i%2!=0)
		{
			q=q+i;
		
		}
				
	}
	cout<<'\n'<<" sum of odd no's b/t 1000 and 2000 :"<<q<<endl;
	return 0;
}


