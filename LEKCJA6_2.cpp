#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


string odwrocStr(string str)
{     //odwraca string od tylu zapisujac go od ty³u
    string odwrStr = "";       
    for (int i=0; i<str.length(); i++) //tyle razy, ile d³ugoœæ stringu 
    {
        odwrStr = str[i] + odwrStr; //doklejamy znaki ale na pocz¹tku 81 -> 18 im bardziej cyfra z ty³u liczby tym póŸniej doklejona
    }
    return odwrStr;
}


int odwrocLiczbe(int liczba)
{
    int wynik;
    string liczbaStr = to_string(liczba), //zamien liczbe na string
           liczbaOdwrStr = "";
           
    liczbaOdwrStr = odwrocStr(liczbaStr); //odwroc string
    
    wynik = (int) strtol(liczbaOdwrStr.c_str(), NULL, 10); //zamienc odwrocony string na liczbe
    return wynik; //zwroc odwrocona liczbe
}

bool sprawdzCzyPalindrom(string str)
{ 
    //w petli wczytaj string do po³owy i sprawdz str[0] == str[str.length()-1]   czy pierwsza jest == ostatnia
    for (int i=0; i<str.length()/2; i++)
       if (str[i] != str[str.length()-1-i]) //[0]!=[str.length()-1]  ostatnia,  [1]!=[str.length()-2] przedostatnia
          return false;
          
    return true;
}

bool zadanie59_2(int liczba)
//sprawdza czy suma liczby+odwr jest palindromem
{ 
    string wynikStr = to_string( liczba+odwrocLiczbe(liczba) );
    return sprawdzCzyPalindrom(wynikStr); 
}


int main(int argc, char** argv) {
    //cout << odwroc_liczbe(81);
    cout << zadanie59_2(19);
    return 0;
}
