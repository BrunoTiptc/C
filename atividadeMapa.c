#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct controle {
    int codigo;
    char nome[50];
    int cpf;
    char vacina[30];
    int dia[2], mes[2], ano[2];
    int numero_lote;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct controle controle[20];
    int op = 0, i = 0, busca, acha;
    int TAM = 20;

    while (op != 4) {
        printf("\nEscolha uma opção:\n1 - Cadastrar Vacina\n2 - Listar aplicações\n3 - Consulta por CPF\n4 - Sair\n");
        scanf("%d", &op);
        fflush(stdin);

        switch (op) {
            case 1:
                printf("Digite o nome: ");
                scanf(" %[^\n]", controle[i].nome);
                printf("Digite o CPF: ");
                scanf("%d", &controle[i].cpf);
                printf("Digite a vacina: ");
                scanf(" %[^\n]", controle[i].vacina);
                printf("Digite o dia: ");
                scanf("%d", &controle[i].dia[0]);
                printf("Digite o mês: ");
                scanf("%d", &controle[i].mes[0]);
                printf("Digite o ano: ");
                scanf("%d", &controle[i].ano[0]);
                printf("Digite o número do lote: ");
                scanf("%d", &controle[i].numero_lote);
                i++;
                break;

            case 2:
                for (int j = 0; j < i; j++) {
                    printf("\nNome: %s\nVacina: %s\nCPF: %d\nData: %02d/%02d/%04d\nLote: %d\n",
                           controle[j].nome, controle[j].vacina, controle[j].cpf,
                           controle[j].dia[0], controle[j].mes[0], controle[j].ano[0],
                           controle[j].numero_lote);
                }
                break;

            case 3:
                printf("Digite o CPF que deseja buscar: ");
                scanf("%d", &busca);
                acha = 0;
                for (int j = 0; j < i; j++) {
                    if (controle[j].cpf == busca) {
                        printf("\nRegistro encontrado:\nNome: %s\nVacina: %s\n", controle[j].nome, controle[j].vacina);
                        acha = 1;
                        break;
                    }
                }
                if (!acha) {
                    printf("Registro não encontrado.\n");
                }
                break;

            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida.\n");
        }
    }

    return 0;
}
