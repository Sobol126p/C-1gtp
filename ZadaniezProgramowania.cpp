#include<iostream>
#include<cstdlib>
#include <fstream>
using namespace std;

int main()
{
	string a;
	 
	ifstream plik2;
    plik2.open("c:\\a.txt");  
    if(plik.good())  
     while(!plik2.eof())       
                         {
                         plik2>>a;   
                         tab[]<<a;    
                          
                         }
    plik2.close();
    
   
	int max, tab[]={a}; 
	
	max = tab[0]; 
	
	for(int i=1;i<10;i++) 
		if(max>tab[i])
			max = tab[i];
	
	cout<<"Najwiêksz¹ liczb¹ jest "<<max<<endl;
	  string Najliczba = max;
	  
	  ofstream wyjscie; 
	 wyjscie.open("out.json");                     
    [
        {
         Najliczba : max,
		}
	]
	plik << " [  \n { \n \"Najliczba\" : \" " << imie ;
	
	system("pause");
	return 0;
}
