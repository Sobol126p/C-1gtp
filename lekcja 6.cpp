#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
    int liczba, i, y;
    cout<<"Podaj liczbe: "<<endl;
    cin>>liczba;
    for (i=2; i<=liczba; i++)
      while (liczba %i ==0 ) {
       liczba/=i;
       if(i==y)
       {
       	liczba++;
	   }
       cout << i << ","; //zapamiêtaj i;
       y = i;
     }
    return 0;
}
