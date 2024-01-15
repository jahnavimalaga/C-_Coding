#include<iostream>
using namespace std;
int multi(int p,int q,int r,int m[10][10],int n[10][10])
{
	int o[10][10]={0};
	for(int i=0;i<p;i++)
	{
		for(int k=0;k<r;k++)
		{
		//	o[i][k]=2;
			for(int j=0;j<q;j++)
			{   
				o[i][k]+=(m[i][j])*(n[j][k]);		
			}
		cout<<o[i][k]<<" "<<endl;
		}
		cout<<'\n';
	}
}


int p,q,r,i,j,k;
int main()
{
	cout<<"no of rows and clumns of the 1st matrix:"<<endl;
	cin>>p>>q;
	cout<<"no of columns of the 2nd matrix:";
	cin>>r;
	int m[10][10],n[10][10];
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
		  //cout<<"nout:"<<n[j][k];
		}
	}
	cout<<"the resultant value is:"<<endl;
    multi(p,q,r,m,n);	
	return 0;
}
