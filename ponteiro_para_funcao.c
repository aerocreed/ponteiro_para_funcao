#include <stdio.h>
#define TAM 5

void funcao1(){
    printf("FUNCAO 1\n");
}
void funcao2(){
    printf("FUNCAO 2\n");
}

void funcao3(){
    printf("FUNCAO 3\n");
}
void funcao4(){
    printf("FUNCAO 4\n");
}

void funcao5(){
    printf("FUNCAO 5\n");
}

void invoca(int (*func)()){
    (*func)();
}

int main()
{
    int p[TAM] = {(int)funcao1, (int)funcao2, (int)funcao3, (int)funcao4, (int)funcao5};
    int i, opcao;
    char *nomes[30] = {"Funcao 1", "Funcao 2", "Funcao 3", "Funcao 4", "Funcao 5"};

    printf("ESCOLHA UMA OPCAO\n");
    for(i=0; i<TAM; i++)
        printf("%d - %s\n", i+1, nomes[i]);
    scanf("%d", &opcao);
    invoca((int(*)())p[opcao-1]);

    return 0;
}
