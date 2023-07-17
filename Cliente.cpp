#include <iostream>
#include <string>
#include <vector>
#include "Cliente.h"

void Cadastrar_cliente(std::vector<Cliente>& clientes)
{
    Cliente novoCliente;

    std::cout << "Nome: ";
    std::getline(std::cin, novoCliente.nome_completo);

    bool informacoesValidas = false;
    while (!informacoesValidas)
    {
        std::cout << "Login: ";
        std::getline(std::cin, novoCliente.login);

        for (const auto& cliente : clientes)
        {
            if (cliente.login == novoCliente.login)
            {
                std::cout << "Login ja em uso. Por favor, escolha outro." << std::endl;
                break;
            }
        }

        if (novoCliente.login.empty())
        {
            std::cout << "Login invalido. Por favor, digite novamente." << std::endl;
        }
        else
        {
            informacoesValidas = true;
        }
    }

    informacoesValidas = false;
    while (!informacoesValidas)
    {
        std::cout << "Email: ";
        std::getline(std::cin, novoCliente.email);

        for (const auto& cliente : clientes)
        {
            if (cliente.email == novoCliente.email)
            {
                std::cout << "Email ja em uso. Por favor, escolha outro." << std::endl;
                break;
            }
        }

        if (novoCliente.email.empty())
        {
            std::cout << "Email invalido. Por favor, digite novamente." << std::endl;
        }
        else
        {
            informacoesValidas = true;
        }
    }

    informacoesValidas = false;
    while (!informacoesValidas)
    {
        std::cout << "Telefone: ";
        std::getline(std::cin, novoCliente.telefone);

        for (const auto& cliente : clientes)
        {
            if (cliente.telefone == novoCliente.telefone)
            {
                std::cout << "Telefone ja em uso. Por favor, escolha outro." << std::endl;
                break;
            }
        }

        if (novoCliente.telefone.empty())
        {
            std::cout << "Telefone invalido. Por favor, digite novamente." << std::endl;
        }
        else
        {
            informacoesValidas = true;
        }
    }

    std::cout << "Data de nascimento (DD MM AAAA): ";
    std::cin >> novoCliente.nascimento.dia;
    std::cin >> novoCliente.nascimento.mes;
    std::cin >> novoCliente.nascimento.ano;
    std::cin.ignore();

    clientes.push_back(novoCliente);
}

void Cadastrar_endereco_a_cliente(std::vector<Cliente>& clientes)
{
    std::string login;

    std::cout << "Login do Cliente: ";
    std::getline(std::cin, login);

    bool clienteEncontrado = false;

    for (auto& cliente : clientes)
    {
        if (cliente.login == login)
        {
            std::cout << "Rua: ";
            std::getline(std::cin, cliente.endereco.rua);

            std::cout << "Complemento: ";
            std::getline(std::cin, cliente.endereco.complemento);

            std::cout << "Bairro: ";
            std::getline(std::cin, cliente.endereco.bairro);

            std::cout << "Cidade: ";
            std::getline(std::cin, cliente.endereco.cidade);

            std::cout << "Ponto de Referencia: ";
            std::getline(std::cin, cliente.endereco.ponto_de_referencia);

            std::cout << "Numero: ";
            std::cin >> cliente.endereco.numero;

            std::cout << "CEP: ";
            std::cin >> cliente.endereco.CEP;

            clienteEncontrado = true;
            break;
        }
    }

    if (!clienteEncontrado)
    {
        std::cout << "Cliente nao encontrado. Deseja cadastrar um novo cliente? (S/N): ";
        std::string resposta;
        std::getline(std::cin, resposta);

        if (resposta == "S" || resposta == "s")
        {
            Cadastrar_cliente(clientes);
        }
    }
}

void Consultar_cliente(std::vector<Cliente>& clientes)
{
    std::string login;
    char opcao = 'S';

    do
    {
        std::cout << "Login: ";
        std::getline(std::cin, login);

        bool login_encontrado = false;
        for (const auto& cliente : clientes)
        {
            if (cliente.login == login)
            {
                login_encontrado = true;
                std::cout << "Nome: " << cliente.nome_completo << std::endl;
                std::cout << "Email: " << cliente.email << std::endl;
                std::cout << "Telefone: " << cliente.telefone << std::endl;
                std::cout << "Data de Nascimento: " << cliente.nascimento.dia << "/"
                          << cliente.nascimento.mes << "/" << cliente.nascimento.ano << std::endl;
                std::cout << "Endereco: " << std::endl;
                std::cout << "Rua: " << cliente.endereco.rua << std::endl;
                std::cout << "Complemento: " << cliente.endereco.complemento << std::endl;
                std::cout << "Bairro: " << cliente.endereco.bairro << std::endl;
                std::cout << "Cidade: " << cliente.endereco.cidade << std::endl;
                std::cout << "Ponto de Referencia: " << cliente.endereco.ponto_de_referencia << std::endl;
                std::cout << "Numero: " << cliente.endereco.numero << std::endl;
                std::cout << "CEP: " << cliente.endereco.CEP << std::endl;

                break;
            }
        }

        if (!login_encontrado)
        {
            std::cout << "Login nao encontrado." << std::endl;
        }

        std::cout << "Deseja consultar outro cliente? (S/N): ";
        std::cin >> opcao;
        std::cin.ignore();
    } while (opcao == 'S' || opcao == 's');
}

void Banco_de_dados(const std::vector<Cliente>& clientes)
{
    char opcao = 'S';

    do
    {
        std::cout << "Usuarios cadastrados:\n\n";
        for (const auto& cliente : clientes)
        {
            std::cout << "Nome: " << cliente.nome_completo << "\nLogin: " << cliente.login << std::endl;
        }

        std::cout << "\nDeseja conferir novamente? (S/N): ";
        std::cin >> opcao;
        std::cin.ignore();
    } while (opcao == 'S' || opcao == 's');
}