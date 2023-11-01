cmake_minimum_required(VERSION 3.5)
project(RegistroAlunos)

add_executable(RegistroAlunos
    src/RegistroAlunos.c
    src/aluno.c
)

set_property(TARGET RegistroAlunos PROPERTY C_STANDARD 99)

target_include_directories(RegistroAlunos PRIVATE include/)

target_link_libraries(RegistroAlunos PRIVATE m)
set_target_properties(RegistroAlunos PROPERTIES OUTPUT_NAME "RegistroAlunos")
