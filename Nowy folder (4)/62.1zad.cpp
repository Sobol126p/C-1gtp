#include <iostream>
#include <fstream>
#include <bitset>
using namespace std;

int main(int argc, char** argv) {
	int max, min, i, x;
	ifstream wej;
    ofstream wyj;
    
    wej.open("C:\\Users\\48535\\Desktop\\liczby1.txt");
   wyj.open("C:\\Users\\48535\\Desktop\\wynik.txt");
   x = 0;
   while(!wej.eof())        
     {
           wej>>i;
           
           if(i>=x)
           {
           	i = max;
		   }
		   if(i<=x)
		   {
		   	i = min;
		   } 
		   x = i;  
     }
     cout<<"Najwieksza liczba: "<<max<<endl;
     cout<<"Najmniejsza liczba: "<<min<<endl;
     cout<<"Najwieksza liczba w zapisie ósemkowym: "<<bitset<8>(max).to_string()<<endl;
     cout<<"Najmniejsza liczba w zapisie ósemkowym: "<<bitset<8>(min).to_string();
     
     wyj<<"Najwieksza liczba: "<<max<<endl;
     wyj<<"Najmniejsza liczba: "<<min<<endl;
     wyj<<"Najwieksza liczba w zapisie ósemkowym: "<<bitset<8>(max).to_string()<<endl;
     wyj<<"Najmniejsza liczba w zapisie ósemkowym: "<<bitset<8>(min).to_string();
     
    
	return 0;
}
