#include <iostream>

using namespace std;

int main()
{
    cout << "Program do obliczania sumy liczb od 1 do n" << endl;

    int a,b,c;

    a = 1;
    c = 0;

    cout<<"Podaj liczbe naturalna n: ";
    cin>>b;

    if(a==b){
        c = a;
    }else{
        for(int i=a; i<=b; i++){
            c += i;
        }
    }


    cout<<"\nSuma od 1 do b wynosi: "<<c;

    return 0;
}
