#include <stdio.h>
#include <string.h>

int main() {
   char string[100];
   int length, i, count = 0;

   printf("Digite uma string: ");
   scanf("%s", string);

   length = strlen(string);

   if (length % 2 != 0) { // se o n煤mero de caracteres da string 茅 铆mpar
      for (i = 0; i < length; i++) {
         if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
             string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') {
            printf("%c ", string[i]); // imprime a vogal encontrada
            count++; // conta o n煤mero de vogais encontradas
         }
      }

      if (count == 0) {
         printf("Nenhuma vogal encontrada."); // se n茫o encontrou nenhuma vogal
      }
   } else {
      printf("O total de caracteres da string eh par."); // se o n煤mero de caracteres da string 茅 par
   }

   return 0;
}
