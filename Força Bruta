/*
Esse código apresenta o uso da Força Bruta ao procurar um padrão dentro de um texto.
Seu objetivo é retornar a posição que começa o padrão dentro do texto ou informar que ele não existe.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define n 10
#define m 3

int forcaBruta(char *t, char *p);

int main(){
    setlocale (LC_ALL, "Portuguese");

    char texto[n], padrao[m];
    int resultado;

    printf("Digite seu texto:\n");
    scanf("%s", &texto);
    printf("\nDigite a palavra que deseja encontrar no texto:\n");
    scanf_s("%s", &padrao);

    resultado = forcaBruta(texto, padrao);

    if(resultado == -1){
        printf("\nPalavra não encontrada!\n");
    }
    else{
        printf("\nA palavra começa na posição %d.\n", resultado + 1);
    }

    return 0;
}

int forcaBruta(char *t, char *p){
    int i, j;

    for(i = 0; i <= n - m; i++){
        j = 0;
        while(j - m && t[i + j] == p[j] ){
            j++;
            if(j == m)  
                return i;
        }
    }
    return -1;
}
