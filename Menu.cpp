#include <iostream>
#include "Menu.h"

void limparTela()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void Menu()
{
    std::cout << "=====================================\n"
              << "[1] Cadastrar cliente\n"
              << "[2] Adicionar endereco a cliente\n"
              << "[3] Mostrar dados do cliente\n"
              << "[4] Banco de dados\n"
              << "[0] Sair\n"
              << "=====================================\n\n"
              << "Opcao: ";
}