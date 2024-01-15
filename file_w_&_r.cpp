#include<iostream>
#include<fstream>
using namespace std;
int main()
{   ofstream out("my text.txt",ios::out|ios::app);
  //  char l[20],ch;
    string line0;
	for(int i=0;i<2;i++){
	cout<<"enter a line:"<<endl;
	//cin.get(l,20);
	//cin.get(ch);
	getline(cin,line0);
	
	out<<line0<<"\n";
}
//out.clear();
//cout<<"written part is done!"<<endl;
	out.close();
    ifstream in("my text.txt");
    
    int b=0;
    string line;
    while(!in.eof()){
    	getline(in,line);
    	cout<<line<<endl;
    	
    	
    	b++;
	}
	cout<<"b="<<b-1<<endl;
	
	in.close();
	//remove("my text.txt");
	return 0;
}

