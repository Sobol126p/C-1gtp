
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
 int liczbaRekordow = 0;
 ifstream file;
 ifstream file1;
 ifstream file2; //plik wejsciowy
 ofstream fileOut; //plik wynikowy do zapisu
 char* endptr; // to jest wskaŸnik na miejsce, gdzie przy konwersji z systemu czworkowego wyst¹pi b³¹d - nieu¿ywana zmienna
 long liczba, liczbaII, liczbaIII, max2, max3, max; //liczba dziesietna, minimum z pliku
 string liczba1, liczba2, liczba3, liczba4, liczba5, liczba6; //dwie liczby w systemie czworkowym wczytujemy jako "string" bo mog¹ byæ d³u¿sze od long long
 file.open("dane_systemy1.txt");
 file1.open("dane_systemy2.txt");
 file2.open("dane_systemy3.txt"); //otworz plik liczb
 fileOut.open("wyniki_systemy.txt"); //otworz plik do wynikow
 bool pierwszy = true;  //do algorytmu MINIMUM - zak³adamy, ¿e pierwsza liczba jest najmniejsza z dotychczas przeczytanych
 
 if(file.good()&&file1.good()&&file2.good())  //sprawdzenie czy plik istnieje
     while(!file.eof()&&!file1.eof()&&!file2.eof())        //petla wykonuje sie az program dojedzie do konca pliku
     {
               file>>liczba1 >> liczba2; 
			   file>>liczba3 >> liczba4;
			   file>>liczba5 >> liczba6;  // wczyta dwie liczby z pliku (w wierszu) do 2 stringów
               liczba =  strtol(liczba2.c_str(), &endptr, 4);
               //^konwersja z systemu czworkowego do dziesietnego, string (C++) trzeba zamieniæ na char * (C) funkcja .c_str()
               //zmienna endptr wskazuje na znak w stringu, który nie pasuje do systemu czwórkowego - tu niesprawdzone, bo zak³adamy, ¿e dane s¹ poprawne!
               if(pierwszy) //jeœli to pierwsza liczba z pliku - bêdzie nowym MINIMUM
               {
                            max = liczba;
                            max2 = liczbaII;
                            max3 = liczbaIII;
                            pierwszy = false;
               }
               else{ //jeœli to kolejna liczba z pliku...
               bool rekord1 = false;
			   bool rekord2 = false;
			   bool rekord3 = false;
                  if(liczba > max){ //... i jest mniejsza od dotychczasowego minimum...
                       max = liczba;
					   
					   rekord1 = true;
				}
					   if(liczbaII > max2){
					    rekord2 = true;
					   max2 = liczbaII;
				}
					   if(liczbaIII > max3){
					    rekord3 = true;
					    max3 = liczbaIII;
				}
				if(rekord1||rekord2||rekord3)	{
				liczbaRekordow++;
				}    // ... to nadpisz min
     }
	 }//eof() koniec pliku
 cout<< "58.3: " << liczbaRekordow <<endl;
 fileOut<< "58.3: " << liczbaRekordow <<endl; //zapisanie najmniejszej liczby z pliku czworkowego do pliku wynikowego
 file.close();
 file1.close();
 file2.close();
 fileOut.close();
 return 0;

}
