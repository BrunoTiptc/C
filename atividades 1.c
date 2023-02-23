#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

// Faça um programa que leia 2 vetores A e B , e faça a comparacao e diga quantas posiçoes de valores diferentes existem entre eles
int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int i,j,l;
	int qtd,contador;
	float valor1[qtd];
	float valor2[qtd];
	int soma = 0;
	int result = 0;
	
	printf("Digite quantas posições tera o seu vetor: \n");
	scanf("%d", &qtd);
	fflush(stdin);
	
	printf("Agora insira os valores no vetor1 \n");
	
	for (i=0; i<qtd; i++)
		{
			printf("Digite o valor %d do vetor1 \n", i+1 );
			scanf("%f", &valor1[i]);
			fflush(stdin);		
		}
		for (j=0; j<qtd; j++)
				{
				printf("Digite o valor %d do vetor2 \n", j+1);
				scanf("%f", &valor2[j]);
				fflush(stdin);
				}
				
				
				for (i=0; i<qtd; i++)
					{
						if (valor1[i] != valor2[j])
						{
							soma++;
						}	
						else 
						{
							i++;
						}
					}
					result = soma;
					printf("A quantidade de posições diferentes é : %d", result);
					
	return 0;
}
