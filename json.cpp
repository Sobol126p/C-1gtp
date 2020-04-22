#include <iostream>
#include <fstream>    
using namespace std;

int main()
{
     string imie="Jan";
     string nazwisko="Kowalski";
     string id="1";
     string imie="Marcin";
     string nazwisko="Wisniewski";
     string id="2";
     string imie="Mateusz";
     string nazwisko="Nowak";
     string id="3";
     
    ofstream wyjscie; 
	 wyjscie.open("out.json");                     
    [
        {
         "imie" : "Jan", 
         "nazwisko": "Kowalski", 
         "id" : 1
        }, 
        {
         "imie" : "Marcin", 
         "nazwisko": "Wiœniewski", 
         "id" : 2
         },
         {
         "imie" : "Mateusz", 
         "nazwisko": "Nowak", 
         "id" : 3
         }
    ]
    plik << " [  \n { \n \"imie\" : \" " << imie ;
    plik << " [  \n { \n \"nazwiski\" : \" " << nazwisko ;
    plik << " [  \n { \n \"id\" : \" " << id ;
    plik.close();               
   
   
   
    cout<<endl;
    system("PAUSE");
    return 0;
}
