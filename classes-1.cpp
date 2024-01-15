#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Course{
	private:
		string co_no[10],time[10];
		int year[10],sem[10],room_no[10],n;
		char D[10][3];
	public:
		void input(){
			cout<<"enter the no of inputs:"<<endl;
			cin>>n;
			for(int i=0;i<n;i++){
				cout<<"enter the year,sem(1or2),room_no:"<<endl;
				cin>>year[i]>>sem[i]>>room_no[i];
				cout<<"enter the course_no,time:"<<endl;
				cin>>co_no[i]>>time[i];
				cout<<"enter 3 days:"<<endl;
				cin>>D[i][0]>>D[i][1]>>D[i][2];
			}
		}
		void display(){
			for(int i=0;i<n;i++){
				cout<<"---------------------------------------------------\n";
				cout<<"the year,sem,room_no:"<<year[i]<<","<<sem[i]<<","<<room_no[i]<<endl;
				cout<<"the course_no,time:"<<co_no[i]<<","<<time[i]<<endl;
				cout<<"3 days:"<<D[i][0]<<","<<D[i][1]<<","<<D[i][2]<<endl;
				cout<<"\n-------------------------------------------------\n";
			}
		}
		void count(){
			int c=0;
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n+1;j++){
					for(int k=0;k<3;k++){
						//for(int l=0;l<3;l++)
							if(D[i][k]==D[j][k]){
							//cout<<"hi"<<endl;
							 if (time[i]==time[j]){
						         c=c+1;
					     	    }
					        }
					    }	
					
					}
				}
				if(c==0)
				   cout<<"no of classes at same time and days:0"<<endl;
				else
				   cout<<"\nno of classes at same time and days:"<<(log(c)/log(3))+1<<endl;
			}
	};
int main()
{
	Course C1;
	C1.input();
	C1.display();
	C1.count();
}
