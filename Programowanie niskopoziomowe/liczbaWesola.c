#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int power(char number, int index){

    number = number - '0';

    int i,
        result = number;

    for(i=1; i<index; i++)
        result*=number;

    return result;
};

int findInArray(int array[], int number, int k){

    int i;

    for(i=0; i<k; i++){
        if(array[i] == number)
            return 1;
    }

    return 0;

}

int checkIsNumberHappy(char *charNumber){

    int i, result, k=0;
    int tabOfDigits[50];

    do{
        printf("Operacja %d: %s \n", k, charNumber);
        i=0;
        result=0;

        do{
            result+=power(charNumber[i], 2);
            i++;
        }while(charNumber[i] != '\0');

        sprintf(charNumber, "%d", result);

        if(findInArray(tabOfDigits, result, k) == 1)
            return 0;

        tabOfDigits[k]=result;

        k++;

    }while(result !=1);

    return result;

};


int main()
{
    char charNumber[5];
    int number = 0;

    printf("Program do weryfikacji czy liczba jest wesola.\n\nWprowadz liczbe: ");
    gets(charNumber);

    number = atoi(charNumber);

    if(checkIsNumberHappy(charNumber) == 1)
        printf("\nTwoja liczba jest wesola!");
    else
        printf("\nTwoja liczba nie jest wesola!");

    return 0;
}
