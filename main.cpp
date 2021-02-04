#include <iostream>
#include <fstream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

ifstream plik;
ifstream plik1;
ofstream wynik;

int main(int argc, char** argv) {
plik.open("C:\\Users\\48535\\Desktop\\liczby1.txt");
plik1.open("C:\\Users\\48535\\Desktop\\liczby2.txt");
wynik.open("C:\\Users\\48535\\Desktop\\wynik.txt");
	int liczba;
	int liczba1;
	int wieksze;
	int rowne;
	 if(plik.good()&&plik.good())  //sprawdzenie czy plik istnieje
     while(!plik.eof()&&!plik1.eof())        //petla wykonuje sie az program dojedzie do konca pliku
     {
     	plik>>liczba;
     	plik1>>liczba1;
     	if(liczba>liczba1)
     	{
     		wieksze++;
		 }
        if(liczba==liczba1)
        {
        	rowne++;
	}
     }
     wynik<<"Liczby wiêksze: "<<wieksze; wynik<<"  Liczby równe: "<<rowne;
     cout<<"Liczby wiêksze: "<<wieksze; cout<<"  Liczby równe: "<<rowne;
	return 0;
}
