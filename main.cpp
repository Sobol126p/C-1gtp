#include <fstream>
#include <iostream>
#include <string>

using namespace std;

ifstream plik;
ofstream zapis;
int litry,jakosc;
float cena;
char napis[50];


int main()
{
    plik.open("C:\\Users\\Egzamin\\Desktop\\paliwo.txt");
    zapis.open("C:\\Users\\Egzamin\\Desktop\\zapis_paliwo.txt");
    if(plik.good())
    while(!plik.eof())
    {
                     plik>>litry>>cena>>jakosc;
                     snprintf(napis, 50, "Litry %d, Cena %.2f zl, Jakosc %x \n",litry,cena,jakosc);
                     zapis<<napis;
    }
    return 0;
}

