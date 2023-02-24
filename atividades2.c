#include <stdio.h>
#include <stdlib.h>
#define  font 3



int main(void) {
	
	float vetorA[font] ;
	int i;
  int j;
	
	
	for (i=0; i<font; i++)
		{
			printf("Digite o valor da posição %d ", i+1) ;
			scanf("%f", &vetorA[i]);
      		fflush(stdin);
		}

  
	for (i=2; i>=0; i--)
		{
			printf("%2.f  \n", vetorA[i] );
		}
	
	
	
	
	
	
}
