#include <iostream>
#include <vector>
#include "Menu.h"
#include "Cliente.h"

int main()
{
    std::vector<Cliente> clientes{};
    char opcao;

    do
    {
        limparTela();
        Menu();
        std::cin >> opcao;
        std::cin.ignore();

        switch (opcao)
        {
            case '1':
            {
                Cadastrar_cliente(clientes);
                break;
            }
            case '2':
            {
                Cadastrar_endereco_a_cliente(clientes);
                break;
            }
            case '3':
            {
                Consultar_cliente(clientes);
                break;
            }
            case '4':
            {
                Banco_de_dados(clientes);
                break;
            }
        }
    } while (opcao != '0');

    return 0;
}