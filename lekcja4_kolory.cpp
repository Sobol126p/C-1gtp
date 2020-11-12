#include <iostream>
#include <bitset>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int kolor = 0x00123456;
	int red = 0x00ff0000;
	int red2 = (kolor & red);
	int green = 0x0000ff00;
	int green2 = (kolor & green);
	int blue = 0x000000ff;
	int blue2 = (kolor & blue);
	int przezr = 0xff000000;
	cout<<"Czerwony: "<<hex<<(red2>>16)<<"    "<<dec<<(red2>>16)<<endl;
	cout<<"Zielony: "<<hex<<(green2>>8)<<"    "<<dec<<(green2>>8)<<endl;
	cout<<"Niebieski: "<<hex<<(blue2)<<"    "<<dec<<(blue2)<<endl;
	cout<<"Przezroczystosc: "<<hex<<(kolor & przezr)<<"    "<<dec<<(kolor & przezr)<<endl;
	
	return 0;
}
