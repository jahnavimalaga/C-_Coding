#include<iostream>
using namespace std;
int main()
{
	int p,q,r,i,j,k;
	cout<<"no of rows and clumns of the 1st matrix:"<<endl;
	cin>>p>>q;
	cout<<"no of columns of the 2nd matrix:";
	cin>>r;
	int m[p][q],n[q][r],o[p][r];
	cout<<"1st matrix"<<'\n';
	for(i=0;i<p;i++)
	{   
		for(j=0;j<q;j++)
		{
		  cout<<"enter the"<<" "<<i<<"row and"<<" "<<j<<"column:";
		  cin>>m[i][j];
		}
	}
	cout<<"2nd matrix"<<'\n';
	for(j=0;j<q;j++)
	{
		for(k=0;k<r;k++)
		{
		  cout<<"enter the"<<" "<<j<<"row and"<<" "<<k<<"column:";
		  cin>>n[j][k];
		}
	}
	for(i=0;i<p;i++)
	{
		for(k=0;k<r;k++)
		{
			o[i][k]=0;
			for(j=0;j<q;j++)
			{
				o[i][k]+=(m[i][j])*(n[j][k]);
			}
			cout<<'\t'<<o[i][k];
		}
	}	
}
