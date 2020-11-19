#include <iostream>
#include <bitset>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

int zerujBit(int liczba, int nrBitu) {
    return ((~(0b1 << nrBitu)) & liczba);
}


int main()
{
    ifstream plikwejscowy;
    ofstream plikwyjsciowy;
    plikwejscowy.open("liczby.txt");
    plikwyjsciowy.open("nrBitu.txt");
 
    int liczba1, liczba2;

    if (plikwejscowy.good())
    {
        while (!plikwejscowy.eof()) 
        {
            plikwejscowy >> liczba1 >> liczba2;
            plikwyjsciowy << zerujBit(liczba1, liczba2) << endl;
            cout << zerujBit(liczba1, liczba2) << endl;
        }

    }

    plikwejscowy.close();
    plikwyjsciowy.close();

    return 0;
}
