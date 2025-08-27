#include <stdio.h>

#define N 30  

int main(void) {
    double nota1[N], nota2[N], media[N];
    double somaMedias = 0.0, mediaTurma = 0.0;

    for (int i = 0; i < N; i++) {
        printf("Aluno %02d\n", i + 1);

        printf("  Primeira nota: ");
        scanf("%lf", &nota1[i]);

        printf("  Segunda nota: ");
        scanf("%lf", &nota2[i]);

        media[i] = (nota1[i] * 2 + nota2[i] * 3) / 5.0;

        somaMedias += media[i];
    }
    mediaTurma = somaMedias / N;

    printf("\nMédia da turma: %.2f\n", mediaTurma);
    printf("Alunos com média acima da média da turma:\n");

    for (int i = 0; i < N; i++) {
        if (media[i] > mediaTurma) {
            printf("Aluno %02d -> Nota1: %.2f, Nota2: %.2f, Média: %.2f\n",
                   i + 1, nota1[i], nota2[i], media[i]);
        }
    }

    return 0;
}
