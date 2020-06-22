#include <iostream>

using namespace std;

void podpunkt_1(int *tab){
    cout<<tab[0];
}

void podpunkt_2(int *tab, int length){

    for(int i=0; i<length; i++){
        cout<<tab[i]<<endl;
    }
}

void podpunkt_3(int *tab, int length){

    int wynik=0;

    wynik = tab[--length]-tab[0];

    cout<<wynik<<endl;
}

void podpunkt_4(int *tab, int length){

    int wynik = 0;

    for(int i=0; i<length; i++)
        wynik+=tab[i];

    cout<<wynik<<endl;
}

void podpunkt_5(int *tab){

    int el;

    cout<<"Podaj ktory element wyswietlic: ";
    cin>>el;

    cout<<tab[--el];
}


int main()
{
    int length, wybor;

    cout << "Podaj ilosc elementow tablicy: ";
    cin>>length;

    int tab[length];

    for(int i=0; i<length; i++){
        cout<<"Wpisz element do tablicy: ";
        cin>>tab[i];
    }

    do{
        cout<<"Wybierz co zrobic. Wyprowadz:\n1 - wartosc pierwszego elementu tablicy\n2 - wyprowadz zawartosc tablicy"
            <<"\n3 - wyprowadz roznice miedzy ostatnim element a pierwszym\n4 - wyprowadz sume wszystkich elementow tablicy\n5 - wyprowadz dowolnie wybrany el.\nWybor: ";
        cin>>wybor;
    }while(!(wybor>0 && wybor<6));

    switch(wybor){

    case 1:
        podpunkt_1(tab);
        break;
    case 2:
        podpunkt_2(tab, length);
        break;
    case 3:
        podpunkt_3(tab, length);
        break;
    case 4:
        podpunkt_4(tab, length);
        break;
    case 5:
        podpunkt_5(tab);
        break;
    default:
        break;
    }

    return 0;
}
