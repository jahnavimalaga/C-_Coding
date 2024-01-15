#include<iostream>
#include<cmath>
using namespace std;
float mean,stde,sqr=0,sum=0;
int main()
{   int n;
	cout<<"enter the no of students:"<<endl;
	cin>>n;
	float score[n];
	
	for (int i=0;i<n;i++)
	{
		//cout<<"enter the scores of each student:"<<score[i];
		cout<<"score of the student is:"<<endl;
		cin>>score[i];		
		sum=sum+score[i];
		sqr=sqr+(score[i]*score[i]);
		
	}
	mean=(float(sum)/n);
	cout<<"mean="<<mean<<endl;
	stde=sqrt((sqr/n)-(mean*mean));
	cout<<"standard deviation:"<<stde<<endl;

}

