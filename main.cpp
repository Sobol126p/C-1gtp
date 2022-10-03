#include <fstream>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    double x,y,r;
    int dobra_miara = 0;
    int pierwsza_cw = 0,druga_cw = 0,trzecia_cw = 0,czwarta_cw = 0;

    ifstream okregi;
    okregi.open("C:\\Users\\Egzamin\\Desktop\\folder_for_c++\\dane\\79\\okregi.txt");
   while(!okregi.eof()){
    okregi>>x>>y>>r;
    int pomiar_srodka(double x,double y,double r);
    {
        if(r<=fabs(x)&&r<=fabs(y))
        {
            if ( x > 0 && y > 0 ){pierwsza_cw++;}
            else if ( x < 0 && y > 0 ){druga_cw++;}
            else if ( x < 0 && y < 0 ){trzecia_cw++;}
            else if ( x > 0 && y < 0 ){czwarta_cw++;}
            dobra_miara++;
        }
    }
}
cout<<"Okregi mieszczace sie w 1 cwiartce: "<<dobra_miara<<endl;
printf("Okregi: 1 cwiartka: %d   2 cwiartka: %d   3 cwiartka: %d   4 cwiartka: %d",pierwsza_cw,druga_cw,trzecia_cw,czwarta_cw);

cout<<endl<<endl<<"---------------------------------------"<<endl<<endl;


int t = 1000;
double x1[t],y1[t],r1[t];
int pary = 0;

    ifstream okreg;
    okreg.open("C:\\Users\\Egzamin\\Desktop\\folder_for_c++\\dane\\79\\okregi.txt");
    cout<<"wpisywanie do tablicy..."<<endl;
    while(!okreg.eof()){
    okreg>>x1[i]>>y1[i]>>r1[i];
    i++;
    }

    double x2,y2,r2;
    int u = 0;
    ifstream okreg1;
    okreg1.open("C:\\Users\\Egzamin\\Desktop\\folder_for_c++\\dane\\79\\okregi.txt");
    cout<<"obliczanie..."<<endl;
    while(!okreg1.eof()){

    okreg1>>x2>>y2>>r2;
    if(r1[u]==r2){

        if(x1[u] == x2 && y1[u] == -y2){pary++;}
        if(y1[u] == y2 && x1[u] == -x2){pary++;}
        u++;
    }
    }
cout<<"Koniec"<<endl;
cout<<"Pary: "<<pary;
getchar();
    return 0;
}


