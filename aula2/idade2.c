#include <stdio.h>


//Contatnte em C
#define N 10

int main()
{
    int idade[N], *p, numAluno, t;

    
    printf("Digite a quantidade de aluno: ");
    scanf("%i", &numAluno);

    if (numAluno>N){
        printf("Excedeu o limite de memória.");
    }else{
        for(t=0; t<numAluno; t++){
            p = &idade[t];
            printf("Digite as idade do aluno: ");
            scanf("%i", p);
        }
        for (t = 0; t < numAluno; t++)
        {
            p = &idade[t];
            printf("Idade %i: %i\n", t, *p);
        }
    }

    
    return 0;

}