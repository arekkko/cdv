#include <stdio.h>

int I;
char C;
long L;
short S;  
double D;

main(){
  int i;
  char c;
  long l;
  short s;  
  double d;
  
  printf("Addres: %p liczba bajtow %d \n", &i, sizeof(i)); 
  
  printf("Addres: %p liczba bajtow %d \n", &c, sizeof(c)); 
    
  printf("Addres: %p liczba bajtow %d \n", &l, sizeof(l)); 
      
  printf("Addres: %p liczba bajtow %d \n", &s, sizeof(s)); 
  
  printf("Addres: %p liczba bajtow %d \n", &d, sizeof(d)); 
  
}
  
