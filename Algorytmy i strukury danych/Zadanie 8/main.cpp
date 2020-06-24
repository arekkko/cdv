#include <iostream>

using namespace std;

void wybor_2(int *tab, int szukana){

    int TabZnalezionych[24][2];
    int j=0;
    bool znaleziono = false;

    for(int i=0;i<24;i++){
        if(tab[i]==szukana){
            TabZnalezionych[j][0] = szukana;
            TabZnalezionych[j][1] = i;
            j+=1;
            znaleziono=true;
        }
    }

    if(!znaleziono){
        cout<<"Nie znaleziono"<<endl;
    }
    else{
        for(int i=0;i<j;i++){
            if(TabZnalezionych[i] != '\0')
                cout<<"Znaleziono: "<<TabZnalezionych[i][0]<<" indeks: "<<TabZnalezionych[i][1]<<endl;

        }
    }
}

void wybor_1(int *tab, int szukana){

    bool znaleziono = false;

    for(int i=0;i<24;i++){
        if(tab[i]==szukana){
            cout<<"Znaleziono!\nWartosc: "<<tab[i]<<"\nKlucz: "<<i<<endl;
            znaleziono = true;
            break;
        }
    }
    if(!znaleziono)
        cout<<"Nie znaleziono"<<endl;
}

int main()
{
    int szukana, wybor;

    int tab[24] = {1,42,24,64,26,54,43,57,3,1,64,26,53,5,65,1,57,32,3,54,1,75,8,23};

    cout<<"Podaj wartosc do wyszukania: ";
    cin>>szukana;

    do{
        cout<<"Wybierz sposob przeszukiwania\n1 - szukaj klucza,\n2 - szukaj wszystkich pasujacych:\nWybor: ";
        cin>>wybor;
    }while(!(wybor>0 && wybor<3));

    switch(wybor)
    {
    case 1:
        wybor_1(tab, szukana);
        break;
    case 2:
        wybor_2(tab, szukana);
        break;
    default:
        break;
    }

    return 0;
}
