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
	for(int a=1;a<10;a++) 
		if(max>tab[a])
			max = tab[a];
	
	cout<<"Najwiêksz¹ liczb¹ jest "<<max<<endl;
	  string Najliczba = max;
	  
	  ofstream wyjscie; 
	 wyjscie.open("out.json");                     
	plik << " [  \n { \n \"Najliczba\" : \" " <<max ;
	
	system("pause");
	return 0;
}
