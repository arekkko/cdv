#include <iostream>

using namespace std;

int main()
{
    int tab[6][6] = {{1,42,24,64,26,54},{43,57,3,1,25,26},{53,5,65,1,57,32},{3,54,1,75,8,23},{24,60,66,25,32,8},{8,41,25,11,12,4}};
    int szukana, Ax, Ay, Bx, By;
    int TabZnalezionych[36][3];

    cout<<"Podaj szukana wartosc: ";
    cin>>szukana;

    cout<<"Wsp pierwszego elementu to 1,1!"<<endl;
    cout<<"Podaj wspolrzedne gornego lewego rogu x: ";
    cin>>Ax;
    cout<<"Podaj wspolrzedne gornego lewego rogu y: ";
    cin>>Ay;
    cout<<"Podaj wspolrzedne dolnego prawego rogu x: ";
    cin>>Bx;
    cout<<"Podaj wspolrzedne dolnego prawego rogu y: ";
    cin>>By;

    int k=0;
    bool znaleziono = false;

    Ax--;
    Ay--;
    Bx--;
    By--;

    for(int i=Ay;i<=By;i++){
        for(int j=Ax; j<=Bx; j++){
            if(tab[i][j]==szukana){
                TabZnalezionych[k][0] = szukana;
                TabZnalezionych[k][1] = i;
                TabZnalezionych[k][2] = j;
                znaleziono=true;
                k+=1;
            }
        }
    }

    if(znaleziono)
        for(int i=0; i<k; i++)
            cout<<"Wartosc: "<<TabZnalezionych[i][0]<<" indeks/wsp x "<<TabZnalezionych[i][2]<<" indeks/wsp y "<<TabZnalezionych[i][1]<<endl;
    else
        cout<<"Nie znaleziono"<<endl;

    return 0;
}
