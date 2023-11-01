# RegistroAlunos

# Autores

- Benjamim
- Caio
- Wesley

## Descrição

O código é um programa em linguagem C
que permite ao usuário gerenciar informações
sobre alunos, incluindo nome, matrícula e nota.

## Estrutura do Projeto

O projeto segue a seguinte estrutura de diretórios:

. src: contém os arquivos de código-fonte do projeto;
. lib: pasta para bibliotecas;
. include: armazena arquivos de cabeçalho (headers) usados no projeto;
. CMakeLists.txt: arquivo de configuração do CMake para a compilação.

## Pré-requisitos

Para compilar e executar este projeto, você precisará das seguintes ferramentas:

- CMake
- NMake (opcional)
- MinGW (opcional)
- Compilador C (por exemplo, GCC)

Certifique-se de instalá-los em seu sistema antes de continuar.

## Compilação e Execução

Siga estas etapas para compilar e executar o projeto:

1. Crie uma pasta de compilação: 'mkdir build';
2. Acesse a pasta de compilação: 'cd build';
3. Configure o projeto com o CMake: 'cmake ..';
4. Compile o projeto: 'make'
5. Execute o projeto: './RegistroAlunos'.

## Agradecimentos

Agradeço ao Professor Claudio Correa por sua orientação
e aos meus colegas Benjamim e Caio pela colaboração no projeto.

## Notas

1. Caso esteja usando o MinGW no Windows, use: 'mingw32-make' para compilar o projeto.

2. Caso não tenha o NMake instalado, configure o gerador
do CMake para "MinGW Makefiles" ao executar o cmake (especifique o compilador C e C++ correto):
'cmake -G "MinGW Makefiles" -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++ ..'

O código utiliza estruturas de dados
para representar informações de alunos e alocação
dinâmica de memória para armazenar os dados dos alunos.
Ele inclui um loop que permite ao usuário executar
várias operações até optar por sair do programa.
O código também libera a memória alocada
dinamicamente no final da execução.

