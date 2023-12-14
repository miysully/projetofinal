/*
  Autor: Benjamim, Caio e Wesley.
  Data: 01/11/23
  Descricao: Projeto final de laboratório. Um programa em C que permite gerenciar uma lista de alunos usando
  fundamentos abordados em AED 2 (funcoes, estruturas de dados, alocacao dinamica etc...).
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"

int main(){
    struct Aluno *alunos = NULL; // Declara da lista de alunos.
    int quantidadeAlunos = 0; // Armazena a quantidade de alunos na lista.
    int opcao, matricula;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar aluno\n");
        printf("2. Pesquisar aluno por matricula\n");
        printf("3. Listar todos os alunos\n");
        printf("4. Ordenar alunos por matricula\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarAluno(&alunos, &quantidadeAlunos); // Chama a funcao para adicionar um aluno.
                break;
            case 2:
                printf("Digite a matricula do aluno a ser pesquisado: ");
                scanf("%d", &matricula);
                pesquisarAluno(alunos, quantidadeAlunos, matricula); // Chama a funcao para pesquisar um aluno por matricula.
                break;
            case 3:
                listarAlunos(alunos, quantidadeAlunos); // Chama a funcao para listar todos os alunos.
                break;
            case 4:
                ordenarAlunos(alunos, quantidadeAlunos); // Chama a funcao para ordenar os alunos por matricula.
                break;
            case 0: // Exit do programa.
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    free(alunos); // Libera a memoria alocada dinamicamente para a lista de alunos.
    return 0;
}
