#include <stdio.h>

int main(){
    char nome[50];
    int anoInicio, academico, atleticismo, criatividade, carisma;
    
    printf("Nome do aluno: ");
    scanf("%s", nome);

    printf("Ano de matricula: ");
    scanf("%d", &anoInicio);

    printf("Academico: ");
    scanf("%d", &academico);

    printf("Atleticismo: ");
    scanf("%d", &atleticismo);

    printf("Criatividade: ");
    scanf("%d", &criatividade);

    printf("Carisma: ");
    scanf("%d", &carisma);

    printf("Nome do aluno: %s\n", nome);
    printf("Ano de matricula do aluno: %d\n", anoInicio);
    printf("Academico do aluno: %d\n", academico);
    printf("Atleticismo do aluno: %d\n", atleticismo);
    printf("Criatividade do aluno: %d\n", criatividade);
    printf("Carisma do aluno: %d\n", carisma);

    return 0;
}