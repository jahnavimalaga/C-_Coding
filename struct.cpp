#include<iostream>
#include<cmath>
using namespace std;
struct pupils
{
	char name;
	char rollno;
	int marks;
	char grade;
};
char grades(int info[100][2], int n)
{  
    char g[n];
    for(int i=0;i<n;i++)
	{
	   if (info[i][1]>80)
	   {g[i]="A";
	   }
	   else if(info[i][1]<80&&info[i][1]>69)
	   {g[i]="B";
	   }
	   else if(info[i][1]>50&&info[i][1]<68)
	   {g[i]="C";
	   }
	   else if(info[i][1]>35info[i][1]<49)
	   {g[i]="D";
	   }
	   else{g[i]="F"
	   }
}
int main()
{
	int info[100][2],n;
	cout<<"no of students in the class:"<<'\n';
	cin>>n;
	char c[n+1];
	cout<<"enter the names of"<<" "<<n<<" "<<"students"<<'\n';
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{   if(j==0)
		    {
			cout<<"roll no of the"<<" "<<i<<" "<<"student:"<<'\n';
			cin>>info[i][j];
			}
			else if(j==1)
			{
		    cout<<"marks of the"<<" "<<i<<" "<<"student:"<<'\n';
			cin>>info[i][j];
			}
		}
	}
	return 0;
}
