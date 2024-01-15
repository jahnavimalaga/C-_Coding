#include<iostream>
#include<fstream>
using namespace std;
int main()
{   ofstream out("my text.txt");
    char l[20],ch;
	
	cout<<"enter a line:"<<endl;
	cin.get(l,20);
	cin.get(ch);
	out<<l<<"\n";
	cout<<"written part is done!"<<endl;
	out.close();
	return 0;
}
