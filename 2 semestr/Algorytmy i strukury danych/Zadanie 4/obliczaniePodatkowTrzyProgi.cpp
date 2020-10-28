#include <iostream>

using namespace std;

int zarobekTygodniowy(int SG, int LG)
{
    if(LG>40)
        return (40*SG)+((LG-40)*(SG*2));
    else
        return LG*SG;
};

double liczPodatek(double kwota, double stawka)
{

    return (kwota*stawka);
};

void realizujIprog(int wynagrodzenieRoczne)
{
    int IprogPWartosc, IprogWynNet;

    IprogPWartosc   = liczPodatek((double)wynagrodzenieRoczne, 0.19);
    IprogWynNet     = wynagrodzenieRoczne-IprogPWartosc;

    cout<<"Roczne zarobki wynosza: "<<wynagrodzenieRoczne<<"\nStawka podatkowa 19% \nWyliczony podatek: "
        <<IprogPWartosc<<"\nWynagrodzenie po potraceniu podatku wynosi: "<<IprogWynNet<<endl;

};

void realizujIIprog(int wynagrodzenieRoczne, int IprogPWartosc, int IprogWynNet)
{
    double IIprogPWartosc;

    int IIprogWynNet, IIprogZarobek,
        wynagrodzenieKonc;

    IIprogZarobek       = wynagrodzenieRoczne-20000;
    IIprogPWartosc      = liczPodatek((double)IIprogZarobek, 0.21);
    IIprogWynNet        = IIprogZarobek-IIprogPWartosc;
    wynagrodzenieKonc   = IprogWynNet+IIprogWynNet;

    cout<<"Roczne zarobki wynosza: "<<wynagrodzenieRoczne<<"\nStawki podatkowa 19% oraz 21% \n\nPodatek stawka podatkowa 19%: "
        <<IprogPWartosc<<"\nPodatek stawka podatkowa 21%: "<<IIprogPWartosc<<"\n\nWynagrodzenie koncowe po potraceniu podatkow "
        <<wynagrodzenieKonc<<endl;

};


void realizujIIIprog(int wynagrodzenieRoczne, int IprogPWartosc, int IprogWynNet)
{
    double IIprogPWartosc;

    int IIprogWynNet, IIIprogZarobek, IIIprogWynNet, IIIprogPWartosc,
        wynagrodzenieKonc;

    //II prog
    IIprogPWartosc      = liczPodatek(10000, 0.21);
    IIprogWynNet        = 10000-IIprogPWartosc;

    //III prog
    IIIprogZarobek      = wynagrodzenieRoczne-30000;
    IIIprogPWartosc     = liczPodatek((double)IIIprogZarobek, 0.28);
    IIIprogWynNet       = IIIprogZarobek-IIIprogPWartosc;

    wynagrodzenieKonc   = IprogWynNet+IIprogWynNet+IIIprogWynNet;

    cout<<"Roczne zarobki wynosza: "<<wynagrodzenieRoczne<<"\nStawki podatkowe 19%, 21%, 28% \n\nPodatek stawka podatkowa 19%: "
        <<IprogPWartosc<<"\nPodatek stawka podatkowa 21%: "<<IIprogPWartosc<<"\nPodatek stawka podatkowa 28%: "<<IIIprogPWartosc
        <<"\n\nWynagrodzenie koncowe po potraceniu podatkow "<<wynagrodzenieKonc<<endl;

};

int main()
{
    int SG, LG, ZT, wynagrodzenieRoczne;

    bool wybor;

    cout << "Program do liczenia podatkow w 3 prograch podatkowych - Arek Kopczynski\n" << endl;

    //Get value of variables form user
    do{
        cout<<"Podaj stawke godzinowa: ";
        cin>>SG;
    }while(SG<=0);

    do{
        cout<<"Podaj liczbe przepracowanych godzin tygodniowo: ";
        cin>>LG;
    }while(LG<0);


    //Obliczenie zarobku tygodniowego
    ZT=zarobekTygodniowy(SG, LG);

    cout<<"Pracujac tygodniowo: "<<LG<<" godzin \nZarabiasz: "<<ZT<<" PLN\nCzy obliczyc wynagrodzenie roczne? Wpisz 1/0 - jesli TAK to 1, jesli NIE to 0"<<endl;
    cin>>wybor;

    if(wybor == 0)
        return 0;

    wynagrodzenieRoczne = 52*ZT;

    if(wynagrodzenieRoczne>20000){

        int IprogPWartosc, IprogWynNet;

        IprogPWartosc = 20000*0.19;
        IprogWynNet   = 20000-IprogPWartosc;

        if(wynagrodzenieRoczne>30000)
            realizujIIIprog(wynagrodzenieRoczne, IprogPWartosc, IprogWynNet);
        else
            realizujIIprog(wynagrodzenieRoczne, IprogPWartosc, IprogWynNet);
    }
    else
        realizujIprog(wynagrodzenieRoczne);



    return 0;
}
