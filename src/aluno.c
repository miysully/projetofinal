#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

void adicionarAluno(struct Aluno **alunos, int *quantidadeAlunos){ // Funcao para adicionar um aluno na lista.
    struct Aluno aluno;
    printf("Digite o nome do aluno: ");
    scanf("%s", aluno.nome);
    printf("Digite a matricula do aluno: ");
    scanf("%d", &aluno.matricula);
    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);

    (*quantidadeAlunos)++; // Incrementa a quantidade de alunos.
    *alunos = (struct Aluno *)realloc(*alunos, (*quantidadeAlunos) * sizeof(struct Aluno)); // Realoca a memoria para acomodar o novo aluno.
    (*alunos)[(*quantidadeAlunos) - 1] = aluno; // Adiciona o aluno na lista.
    printf("Aluno adicionado com sucesso!\n");
}

void pesquisarAluno(const struct Aluno *alunos, int quantidadeAlunos, int matricula){ // Funcao para pesquisar um aluno por matricula na lista.
    for (int i = 0; i < quantidadeAlunos; i++){ // Itera sobre a lista de alunos.
        if (alunos[i].matricula == matricula){ // Verifica se a matricula do aluno atual corresponde a matricula pesquisada.
            printf("Aluno encontrado:\n");
            printf("Nome: %s\n", alunos[i].nome);
            printf("Matricula: %d\n", alunos[i].matricula);
            printf("Nota: %.2f\n", alunos[i].nota);
            return; // Retorna apos encontrar o aluno.
        }
    }
    printf("Aluno com matricula %d nao encontrado.\n", matricula);
}

void listarAlunos(const struct Aluno *alunos, int quantidadeAlunos){ // Funcao para listar todos os alunos.
    if (quantidadeAlunos == 0){ // Verifica se tem alunos cadastrados.
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    printf("Lista de Alunos:\n"); // Imprime a lista de alunos.
    for (int i = 0; i < quantidadeAlunos; i++){
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Nota: %.2f\n\n", alunos[i].nota);
    }
}

void ordenarAlunos(struct Aluno *alunos, int quantidadeAlunos){ // Funcao para ordenar os alunos por matricula usando o algoritmo Bubble Sort.
    for (int i = 0; i < quantidadeAlunos - 1; i++){ // Bubble Sort para ordenacao.
        for (int j = 0; j < quantidadeAlunos - i - 1; j++){
            if (alunos[j].matricula > alunos[j + 1].matricula){ // Troca os alunos se estiverem fora de ordem.
                struct Aluno temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }
    printf("Alunos ordenados por matricula.\n");
}
