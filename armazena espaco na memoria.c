#include <stdio.h>
#include <stdlib.h>

int main(){

int *ptr;
printf("Endere�o: %p \n\n", ptr);
ptr = (int *) malloc (sizeof (int));
printf("Endere�o: %p \n Valor: %d \n\n", ptr, *ptr);
*ptr = 10;
printf ("Endere�o: %p \nValor: %d \n\n", ptr, *ptr);
int x;
x = 20;
ptr = &x;
printf ("Endere�o: %p \nValor: %d \n\n", ptr, *ptr);
return (0);
}

