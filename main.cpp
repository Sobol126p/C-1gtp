#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

int wybor,i;
float f;

    printf("Menu: \n");

    printf("1 - Zaokrąglij liczby \n");
    
    printf("2 - System szesnastkowy \n");
    
    printf("3 - Zera \n");
    
    printf("4 - Koniec \n");
    
    scanf("%d", &wybor);
    
    switch(wybor)
    {
        case 1:
            printf("Podaj liczbę zmiennoprzecinkowa: \n");
            scanf("%f", &f);
            printf("Zaokrąglij cyfry: %.2f \n", f );
        break;
        case 2:
            printf("Podaj liczbę: \n");
            scanf("%i", &i);
            printf("System szesnastkowy: %x \n", i );
        break;
        case 3:
            printf("Podaj liczbę: \n");
            scanf("%i", &i);
            printf("Zera: %07d", i );
        break;
        case 4:
            exit;
        break;
    }
}
