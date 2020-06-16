#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Program do wyznacznia NWD - Arek Kopczynski\n\nPodaj a: ";
    cin>>a;
    cout<<"\nPodaj b: ";
    cin>>b;

    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }

    cout<<"\nNWD wynosi "<<a<<endl;

    return 0;
}
