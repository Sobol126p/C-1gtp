#include <iostream>
#include <bitset>

using namespace std;

int main() {
int a,b;
cout<<"Podaj a:"<<endl;
cin>>a;
cout<<"Podaj b:"<<endl;
cin>>b;
cout<<"Lub: "<<bitset<8>(a|b).to_string()<<endl;
cout<<"XOR: "<<bitset<8>(a^b).to_string()<<endl;
cout<<"AND: "<<bitset<8>(a&b).to_string()<<endl;
cout<<"~a: "<<bitset<8>(~a).to_string()<<endl;
cout<<"~b: "<<bitset<8>(~b).to_string()<<endl;
cout<<"przesuniecie w lewo: "<<bitset<8>(a>>=b).to_string()<<endl;
cout<<"przesuniecie w prawo: "<<bitset<8>(b<<=a).to_string()<<endl;
}
