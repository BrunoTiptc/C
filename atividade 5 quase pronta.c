#include <stdio.h>
#include <stdlib.h>

int main() {

	int i, qtd;
	char palavra[10];
	char vogais[6];
	
		printf("Digite uma palavra \n "); 
		gets(palavra);
		qtd = strlen(palavra);
		printf("A quantidade de caracteres é %d \n", qtd );
		
		if (qtd % 2 != 0)
			{
				printf("sim é impar");
			}
		else{
			printf("FIM");
			}
		
		
		
		
	return 0;
}
