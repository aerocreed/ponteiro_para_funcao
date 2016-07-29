#include <stdio.h>

/* Referências:
 * http://www.cyan-lang.org/jose/courses/06-2/lc/Ponteiros-para-Funcoes.htm
 * http://www.dca.fee.unicamp.br/cursos/EA876/apostila/HTML/node144.html
 */

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

void invoca(void* (*func)()){
    (*func)();
}

int main()
{
    void* p[] = {funcao1, funcao2, funcao3, funcao4, funcao5, puts, printf};
    int i;
    for(i=0; i<(sizeof(p)/sizeof(*p)); i++)
	    invoca(p[i]);
    return 0;
}
