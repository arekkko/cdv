#include <iostream>

using namespace std;

void displayTable(int *tab, int j){
    for(int i=0; i<j;i++){
        cout<<tab[i]<<", ";
    }
}

void sortTable(int *tab, int j){

    bool zamiana;

    do{
        zamiana=false;
        for(int i=0; i<j;i++){
            if(tab[i]>tab[i+1]){
                swap(tab[i], tab[i+1]);
                zamiana=true;
            }
        }
    }while(zamiana==true);

}

int main()
{
    int tab[15] = {85,6,45,75,72,4,48,41,29,76,63,78,36,22,82};
    int j=14;

    cout<<"Tablica poczatkowa"<<endl;
    displayTable(tab, j);

    sortTable(tab, j);

    cout<<"\n\nTablica po sortowaniu"<<endl;
    displayTable(tab, j);
    return 0;
}
