#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;


int main(int argc, char** argv) {
	char c;
	bool ii=false;
	bool jj=false;
	ifstream file;
    file.open("C:\\Users\\48535\\Desktop\\dane_obrazki.txt");
	file>>c;
	int t[20][20];
	if (!file.eof()){
    for (int i=0; i<20; i++)
    {
    	if (t[0][i] == t[0][i+10])
    	{
    		ii=true;
		}
    for(int j=0; j<20; j++)
    {
    	if (t[0][j] == t[0][j+10])
    	{
    		jj=true;
		}
    t[i][j] <<c;
    cout<<t[i][j]<<"   ";
    }
    cout <<endl;
    }
   if(ii&&jj==true)
   {
   	cout<<"Obrazek w pionie i poziomie jest symetryczny"<<endl;
   }
}
    getchar();
	return 0;
}
