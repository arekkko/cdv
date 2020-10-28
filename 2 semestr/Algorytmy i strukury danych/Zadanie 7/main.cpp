#include <iostream>

using namespace std;

int main()
{
    int m, n, wybor;

    cout<<"Podaj ilosc m elementow tablicy: ";
    cin>>m;

    cout<<"Podaj ilosc n elementow tablicy: ";
    cin>>n;

    int tab[m][n];

    cout<<"Wpisuj teraz dane do tablicy"<<endl;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>tab[i][j];
        }
    }


    do{
        cout<<"Wybierz co zrobic. Wyprowadz:\n1 - zawartosc tablicy,\n2 - sume wszystkich elementow w tablicy,\n3 - dowolnie wybrany przez uzytkownika element[m,n]\nWybor: ";
        cin>>wybor;
    }while(!(wybor>0 & wybor<4));


    switch(wybor){
        case 1:
            {
                for(int i=0; i<m; i++){
                    for(int j=0; j<n; j++){
                        cout<<tab[i][j]<<endl;
                    }
                }
            }

            break;
        case 2:
            {
                int suma=0;
                for(int i=0; i<m; i++){
                    for(int j=0; j<n; j++){
                        suma+=tab[i][j];
                    }
                }
                cout<<suma<<endl;
            }

            break;
        case 3:
            {
                cout<<"Podaj element ktory wypisac m: ";
                cin>>m;
                cout<<"Podaj n: ";
                cin>>n;
                cout<<tab[--m][--n];
            }
            break;
        default:
            break;
    }

    return 0;
}
