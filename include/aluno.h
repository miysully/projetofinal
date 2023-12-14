#ifndef ALUNO_H
#define ALUNO_H

struct Aluno{
    char nome[50];
    int matricula;
    float nota;
};

// Declaracao das funcoes que serao implementadas em 'aluno.c'.
void adicionarAluno(struct Aluno **alunos, int *quantidadeAlunos);
void pesquisarAluno(const struct Aluno *alunos, int quantidadeAlunos, int matricula);
void listarAlunos(const struct Aluno *alunos, int quantidadeAlunos);
void ordenarAlunos(struct Aluno *alunos, int quantidadeAlunos);

#endif
