#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream f("text.txt");
char c;
int i = 0;
while (f.get(c)){

    if (c == '\n')
        ++i;
		}
}
