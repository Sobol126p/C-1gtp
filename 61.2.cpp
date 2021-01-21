#include <iostream>
#include <fstream>
#include <algorithm>


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

ifstream plik_wej;
ofstream plik_wyj;
int i, za_duza, max_tego_ciagu;
   
   bool sprawdz_czy_szescian(int liczba)
{
    for(int i = 1; i <= liczba/3; i++)
        if (i*i*i == liczba)
            return true;
    return false;
}
   
int main(int argc, char** argv) {
	
	plik_wej.open("C:\\Users\\48535\\Desktop\\ciagi.txt");
   plik_wyj.open("C:\\Users\\48535\\Desktop\\wynik.txt");
   
    while(!plik_wej.eof())        
     {
               plik_wej>>i; 
               sprawdz_czy_szescian();
			   i>>max_tego_ciagu>>plik_wyj;			   
                
              
     }
	
	
	return 0;
}
