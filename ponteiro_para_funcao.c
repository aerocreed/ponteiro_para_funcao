#include <stdio.h>

/* Referências:
 * http://www.cyan-lang.org/jose/courses/06-2/lc/Ponteiros-para-Funcoes.htm
 * http://www.dca.fee.unicamp.br/cursos/EA876/apostila/HTML/node144.html
 */

typedef void (*Func)();

int soma(int n1, int n2){
    printf("%d + %d = %d\n", n1, n2, n1+n2);
}

void mult(int n1, int n2){
    printf("%d * %d = %d\n", n1, n2, n1*n2);
}

void div(int n1, int n2){
    printf("%d / %d = %d\n", n1, n2, n1/n2);
}

void sub(int n1, int n2){
    printf("%d - %d = %d\n", n1, n2, n1-n2);
}

int main()
{
    Func p[] = {(Func)soma, (Func)mult, (Func)div, (Func)sub}; //(void (*)()) também pode ser usado no lugar de Func
    int i, opcao, n1, n2;
    char *nomes[30] = {"Somar", "Multiplicar", "Dividir", "Subtrair"};

    printf("ESCOLHA UMA OPCAO\n");
    for(i=0; i<(sizeof(p)/sizeof(*p)); i++)
		printf("%d - %s\n", i+1, nomes[i]);
    scanf("%d", &opcao);
	printf("Digite os 2 numeros: \n");
	scanf("%d %d", &n1, &n2);
	p[opcao-1](n1, n2); //Acessa o índice opção -1, pois a indexação começa em 0 e as opções em 1

    return 0;
}
