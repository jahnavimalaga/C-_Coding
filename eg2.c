#include<iostream>
#include<cmath>
using namespace std;
int mean,stde,sum=0;
//float score[3];
int main()
{   int n;
	cout<<"enter the no of students:"<<endl;
	cin>>n;
	float score[n];
	//cout<<"enter the scores of each student:";
	for (int i=0;i<n;i++)
	{
		cout<<"score of the student is:"<<score[i]<<endl;
		cin>>score[i];		
		sum=sum+score[i];
	}
	mean=sum/n;
	cout<<"mean="<<mean<<endl;
}

