#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define  font 3



int main(void) {
	
	int num, num1, num2;
	printf("Digite um numero: \n");
	scanf("%d", &num);
	
		num1 = num * num;
		
		printf("O quadrado de num é: %d \n E a raiz quadrada é %2.f", num1, sqrt(num));
		
	
}
