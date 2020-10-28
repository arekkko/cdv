#include <iostream>

using namespace std;

int licz_suma(int a, int b){
    int wynik=0;

    do{
        wynik+=a;
        a++;
    }while(a<=b);

    return wynik;
}

int licz_suma_kwadratow(int a, int b){
    int wynik=0;

    do{
        wynik+=(a*a);
        a++;
    }while(a<=b);

    return wynik;
}

float licz_srednia_arytmetyczna(float a, float b){

    return ((a+b)/2);
}

int wyborDzialania(){

    int wybor=0;

     do{
        cout<<"Wybierz co zrobic\n1 - suma,\n2 - suma kwadratow,\n3 - srednia arytmetyczna,\n4 - koniec programu\nWybor: ";
        cin>>wybor;
    }while(!(wybor>0 && wybor<5));

    return wybor;
}

int main()
{
    int a=0, b=0, wybor=0;

    do{

        cout<<"Wprowadz a (mniejsza liczba naturalna): ";
        cin>>a;

        cout<<"Wprowadz b (wieksza liczba naturalna): ";
        cin>>b;

    }while(!(a>0 && b>0 && a<b));

    bool customBreak = false;

    do{
        wybor = wyborDzialania();

        switch(wybor){
            case 1:
                cout<<"Wynik wynosi: "<<licz_suma(a, b)<<endl;
                break;
            case 2:
                cout<<"Wynik wynosi: "<<licz_suma_kwadratow(a, b)<<endl;
                break;
            case 3:
                cout<<"Wynik wynosi: "<<licz_srednia_arytmetyczna(a, b)<<endl;
                break;
            case 4:
                customBreak = true;
                break;
            default:
                cout<<"Blad, przeciez wybrales co zrobic. Cos poszlo nie tak"<<endl;
                break;
        }

    }while(!customBreak);



    return 0;
}
