#include <iostream>
#include <fstream>

using namespace std;

ifstream plik;
int i;
int y;
int main(int argc, char** argv) {
	y=0;
	plik.open("C:\\pliki\\plikk.txt");
	while(!plik.eof())        
     {
         plik>>i;
         if(i>=y)
         {	
         	y=i;
		 }
     }

	cout<<"Najwieksza liczba:"<<y;
	
	return 0;
}

