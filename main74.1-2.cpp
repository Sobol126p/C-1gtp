#include <iostream>
#include <fstream>   
using namespace std;

char a;
string b;
ifstream plik;
int ilosc_liczb;
int ril = 0;
int haslo_cyfry;
void zad1()
{
	plik.open("..\\dane\\74\\hasla.txt");  
    if(plik.good())  //sprawdzenie czy plik istnieje
     while(!plik.eof())        //petla wykonuje sie az program dojedzie do konca pliku
                         {
                        plik>>a;
                        b=a;
						
                         if('0'<=a && a<='9')
                         {
                         	ilosc_liczb++;
                         	ril++;
                         }
						 /*if(ril == b.length()){
						 	cout<<"haslo zlozone z cyfr"<<endl;
						 	haslo_cyfry++;
						 }*/
						 cout<<b<<" = Ilosc liczb to: "<<ilosc_liczb<<endl;
                         }
    plik.close();
}



int main()
{
    zad1();  
    cout<<endl;
    system("PAUSE");
    return 0;
}
