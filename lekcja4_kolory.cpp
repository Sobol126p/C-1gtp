#include <iostream>
#include <bitset>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int kolor = 0x00123456;
	int red = 0x00ff0000;
	int green = 0x0000ff00;
	int blue = 0x000000ff;
	int przezr = 0xff000000;
	cout<<"Czerwony: "<<(kolor & red)<<endl;
	cout<<"Zielony: "<<(kolor & green)<<endl;
	cout<<"Niebieski: "<<(kolor & blue)<<endl;
	cout<<"Przezroczystosc: "<<(kolor & przezr)<<endl;
	
	return 0;
}
