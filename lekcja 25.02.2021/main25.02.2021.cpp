
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;


int main(int argc, char** argv) {
	
	ifstream p;
	p.open("C:\\Users\\48535\\Desktop\\dane_obrazki.txt");
	
int y;
int i;
int u;
for(u=0; u<20; u++){
for(y=0; y<20; y++){
 string wiersz;
 p>>wiersz;
 int ilosc_jedynek=0;
 for (i=0; i<20; i++){
   if (wiersz[i]=='1'){
       ilosc_jedynek++;
   }
}
int suma_jedynek; 
suma_jedynek += ilosc_jedynek;
cout<<" "<<suma_jedynek;
}
}
getchar();
	return 0;
}
