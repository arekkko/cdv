#include <iostream>

using namespace std;

int fib(int n){
    if(n==1 || n==2)
        return 1;
    else
        return fib(n-2)+fib(n-1);
}

int main()
{
    int n, p;

    cout << "Podaj element dla ktorego wyliczyc wartosc ciagu ";
    cin>>n;

    p=n;

    cout<<fib(n);


    return 0;
}
