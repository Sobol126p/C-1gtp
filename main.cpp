#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
	
	int tab[100];
	string liczby;
	int max;
	int min;
	 
	ifstream plik;
    plik.open("liczby.txt");  
    
     while(!plik.eof())        //petla wykonuje sie az program dojedzie do konca pliku
                         {
                         	min=1;
                         	max=5;
                         	for(int i; i>100; i++)
							{						 
                            tab[0]= min;
                            if(liczby==2)
							{
								tab[i]<<liczby;
							}
                            if(liczbt==3)
                            {
								tab[i]<<liczby;
							}
							 if(liczbt==4)
                            {
								tab[i]<<liczby;
							}
                            tab[7]=max;
                            }      
                         }
    plik.close();
    
    ofstream plikw;                      
    plikw.open("liczbyu.txt");           
    plikw<<min;    
    plik<< tab[liczby]; 
    plik<<max;   
    plikw.close();               
	return 0;
}
