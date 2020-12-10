#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int dane;

class files {
   ifstream fileIn;
   ofstream fileOut;
  public:
   files(); //otwarcie plików obu
   ~files();
   void loop();
};


	
	

files::files()
{
   fileIn.open("C:\\Users\\48535\\Desktop\\liczby.txt");
   fileOut.open("C:\\Users\\48535\\Desktop\\wynik.txt");
}

files::~files()
{
   fileIn.close();
   fileOut.close();
}

void files::loop()
{

  while(!fileIn.eof())        
     {
               fileIn>>dane;   
                if(dane>1000)
                {
                fileOut<<dane<<endl;
                cout<<dane<<endl;
				}
              
     }
}

main()
{
  files dane;
  dane.loop();
  return 1;
}
	
	
