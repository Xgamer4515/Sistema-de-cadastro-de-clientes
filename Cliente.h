#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>

struct Endereco
{
    std::string rua;
    std::string complemento;
    std::string bairro;
    std::string cidade;
    std::string ponto_de_referencia;
    int numero;
    int CEP;
};

struct Data
{
    int dia;
    int mes;
    int ano;
};

struct Cliente
{
    std::string nome_completo;
    std::string login;
    std::string email;
    std::string telefone;
    Data nascimento;
    Endereco endereco;
    int senha;
};

void Cadastrar_cliente(std::vector<Cliente>& clientes);
void Cadastrar_endereco_a_cliente(std::vector<Cliente>& clientes);
void Consultar_cliente(std::vector<Cliente>& clientes);
void Banco_de_dados(const std::vector<Cliente>& clientes);

#endif  // CLIENTE_H