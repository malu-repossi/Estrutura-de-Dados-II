/*
Esse código apresenta o uso da Busca Binária em uma tabela ordenada.
Seu objetivo é retornar os registros da chave encontrada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tamanho 3

typedef struct Registro
{
    int matricula, quantFaltas;
    char nome[50];
    float notaFinal;
} registro;

int pesquisa(registro *tabela, int chave);


int main(){
    setlocale(LC_ALL, "Portuguese");

    int i, id, retorno;
    registro alunos[tamanho];

    for (i = 0; i < tamanho; i++){
        printf("Digite a matrícula do aluno %d:\n", i+1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite o nome do aluno %d:\n", i+1);
        scanf("%s", alunos[i].nome);
        printf("Digite a quantidade de faltas do aluno %d:\n", i+1);
        scanf("%d", &alunos[i].quantFaltas);
        printf("Digite a nota final do aluno %d:\n", i+1);
        scanf("%f", &alunos[i].notaFinal);
    }

    printf("\n");
    printf("Digite a matrícula do aluno que deseja encontrar:\n");
    scanf("%d", &id);

    retorno = pesquisa(alunos, id);

    if(retorno == -1){
         printf("\nAluno não encontrado! \n");
    }
    else{
        printf("\n");
            printf("Nome: %s \n", alunos[retorno].nome);
            printf("Nota Final: %.2f \n", alunos[retorno].notaFinal);
            printf("Quantidade de faltas: %d \n", alunos[retorno].quantFaltas);
    }

    return 0;
}

int pesquisa(registro *tabela, int chave){
    int inicio, meio, fim;

    inicio = 0;
    fim = tamanho - 1;

    while (inicio <= fim){
        meio = (inicio + fim) / 2;
        if(tabela[meio].matricula == chave){
            return meio;
        }
        else if(tabela[meio].matricula < chave){
            inicio = meio + 1; 
        }
        else{
            fim = meio - 1;
        }
    }

    return -1;
}
