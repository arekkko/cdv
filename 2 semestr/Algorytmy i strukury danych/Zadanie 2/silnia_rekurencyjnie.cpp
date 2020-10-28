#include <iostream>

/*
** Program obliczajacy silnie rekurencyjnie
*/

using namespace std;

int get_main_number(){

    int n;

    do{
        cout<<"Podaj liczbe dla jakiej obliczyc silnie: ";
        cin>>n;
    } while(n<0);
}
int temp = 1;

int count_recursive_silnia(int number){

    if(number == 0)
        return 1;

    return number*count_recursive_silnia(number-1);

}

int count_silnia(int number){

    if(number == 1 || number == 0)
        return 1;

    return count_recursive_silnia(number);
}

int main()
{
    cout << "Program obliczajacy silnie rekurencyjnie\nArek Kopczynski - Czerwiec 2020 r.\n\n" << endl;

    int number = get_main_number();

    cout<<"Silnia z liczby "<<number<<" wynosi: "<<count_silnia(number)<<endl;

    return 0;
}
