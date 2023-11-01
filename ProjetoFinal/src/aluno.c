#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

void adicionarAluno(struct Aluno **alunos, int *quantidadeAlunos){
    struct Aluno aluno;
    printf("Digite o nome do aluno: ");
    scanf("%s", aluno.nome);
    printf("Digite a matricula do aluno: ");
    scanf("%d", &aluno.matricula);
    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);

    (*quantidadeAlunos)++;
    *alunos = (struct Aluno *)realloc(*alunos, (*quantidadeAlunos) * sizeof(struct Aluno));
    (*alunos)[(*quantidadeAlunos) - 1] = aluno;
    printf("Aluno adicionado com sucesso!\n");
}

void pesquisarAluno(const struct Aluno *alunos, int quantidadeAlunos, int matricula){
    for (int i = 0; i < quantidadeAlunos; i++){
        if (alunos[i].matricula == matricula){
            printf("Aluno encontrado:\n");
            printf("Nome: %s\n", alunos[i].nome);
            printf("Matricula: %d\n", alunos[i].matricula);
            printf("Nota: %.2f\n", alunos[i].nota);
            return;
        }
    }
    printf("Aluno com matricula %d nao encontrado.\n", matricula);
}

void listarAlunos(const struct Aluno *alunos, int quantidadeAlunos){
    if (quantidadeAlunos == 0){
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    printf("Lista de Alunos:\n");
    for (int i = 0; i < quantidadeAlunos; i++){
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Nota: %.2f\n\n", alunos[i].nota);
    }
}

void ordenarAlunos(struct Aluno *alunos, int quantidadeAlunos){
    for (int i = 0; i < quantidadeAlunos - 1; i++){
        for (int j = 0; j < quantidadeAlunos - i - 1; j++){
            if (alunos[j].matricula > alunos[j + 1].matricula){
                struct Aluno temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }
    printf("Alunos ordenados por matricula.\n");
}
