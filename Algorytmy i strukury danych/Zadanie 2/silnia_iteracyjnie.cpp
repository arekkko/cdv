#include <iostream>

/*
** Program obliczajacy silnie iteracyjnie
*/

using namespace std;

int get_main_number(){

    int n;

    do{
        cout<<"Podaj liczbe dla jakiej obliczyc silnie: ";
        cin>>n;
    } while(n<0);
}

int count_silnia(int number){

    if(number == 1 || number == 0)
        return 1;

    int wynik = number;

    while(number > 1)
        wynik = wynik * --number;

    return wynik;
}

int main()
{
    cout << "Program obliczajacy silnie iteracyjnie\nArek Kopczynski - Czerwiec 2020 r.\n\n" << endl;

    int number = get_main_number();

    cout<<"Silnia z liczby "<<number<<" wynosi: "<<count_silnia(number)<<endl;

    return 0;
}
