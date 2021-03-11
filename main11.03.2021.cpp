#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <bitset>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
	
	ifstream file;
    file.open("C:\\Users\\48535\\Desktop\\dane_obrazki.txt");
    if (!file.eof()){
    for(int i=0; i<7; i++)
    {
    	string tab[7];
    	file>>tab[7];
    	cout << tab[7] << endl;
	}
	
}
    getchar();
	return 0;
}
