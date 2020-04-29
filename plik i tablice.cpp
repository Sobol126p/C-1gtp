#include <iostream>
#include <fstream>    
using namespace std;

int main()
{
     liczba a;
     
    ofstream plik;                    
    plik.open("c:\\we.txt");        
    plik.close();    
	int t[1000]; 
	t[1] = 1;
	t[2] = 3;
	t[3] = 1;
	t[4] = 23;
	t[5] = 2;
	t[6] = 1;
    
	ifstream plik2;
    plik2.open("c:\\we.txt");  
    if(plik.good())  
     while(!plik2.eof())        
                         {
                         plik2>>a;   
                         cout << "[{ \"liczba\":"<<a <<" }]";
                         }
    plik2.close();
   
       
    
   
    cout<<endl;
    system("PAUSE");
    return 0;
}
