#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
** Proszê napisaæ funkcjê do sprawdzania, czy liczba ca³kowita dodatnia, przekazana jako parametr, jest weso³a.
**
** Sugestia: problem mo¿na zdekomponowaæ, implementuj¹c funkcjê do:
**
** wyznaczania sumy kwadratów cyfr,
** wyszukiwania liczby w zbiorze/tablicy.
*/

/*
** Declarations
*/
typedef unsigned int Naturalna;

bool czy_wesola(Naturalna v);
Naturalna suma_kwadrat(Naturalna v);
bool znajdz(Naturalna tab[], unsigned size, Naturalna szukana);
Naturalna kwadrat(Naturalna v);

using namespace std;

/*
** Implementations
*/

bool czy_wesola(Naturalna v){
    Naturalna tab[20];
    int index = 0;

    tab[index++] = suma_kwadrat(v);

/*    int tab[10];

    tab[0] = suma_kwadrat(v);
    tab[1] = suma_kwadrat(tab[0]);
    tab[2] = suma_kwadrat(tab[1]);
    tab[3] = suma_kwadrat(tab[2]);
    tab[4] = suma_kwadrat(tab[3]);
    tab[5] = suma_kwadrat(tab[4]);

    printf("Wynik to: %i\n", tab[5]);
*/

}

Naturalna suma_kwadrat(Naturalna v){

    Naturalna suma, cyfra;

    int cyfry[5];

    do {
        cyfra = v % 10;
        suma += cyfra*cyfra;
        v /= 10;
    } while(v>0);

    return suma;

}

Naturalna kwadrat(Naturalna v){

    return v*v;
}

/*
** Main program
*/
int main(int argc, char* argv[])
{
    Naturalna liczba = 18;

    int wynik = czy_wesola(liczba);

    for(char** p=argv; *p != NULL; p++){
        //printf("%d %s\n", i, argv[i]);
        printf("%d %s\n", p - argv, *p);

        Naturalna liczba = atol(*p);

        if( czy_wesola(liczba))
            printf("Liczba %d jest wesola\n", liczba);
        else
            printf("Liczba %d nie jest wesola\n", liczba);
    }

    return 0;
}
