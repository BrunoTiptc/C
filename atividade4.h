#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	
	int num1, num2, num3, num4, result, result2;
		printf("Digite o valor do numero 1: \n");
		scanf("%d", &num1);
		fflush(stdin);	
			printf("Digite o valor do numero 2: \n");
			scanf("%d", &num2);
			fflush(stdin);
				printf("Digite o valor do numero 3: \n");
				scanf("%d", &num3);
				fflush(stdin);
					printf("Digite o valor do numero 4: \n");
					scanf("%d", &num4);
					fflush(stdin);
					
					result = num1 + num2 + num3 + num4;
					result2 = result / 4;
					
					printf("A media aritmimetica dos valores e : %d", result2);
	
	
	
	return 0;
}
