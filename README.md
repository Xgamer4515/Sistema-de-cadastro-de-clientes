# Programa de Cadastro de Clientes

Este programa permite o cadastro, consulta e gerenciamento de clientes. Ele foi desenvolvido em C++ e possui as seguintes funcionalidades:

## Funcionalidades

1. **Cadastrar Cliente**: Permite cadastrar um novo cliente com informações como nome, login, email, telefone e data de nascimento.

2. **Adicionar Endereço a Cliente**: Permite adicionar um endereço a um cliente existente. É possível informar o login do cliente e inserir as informações de rua, complemento, bairro, cidade, ponto de referência, número e CEP.

3. **Consultar Cliente**: Permite consultar os dados de um cliente existente. Basta informar o login do cliente para visualizar seu nome, email, telefone, data de nascimento e endereço completo.

4. **Banco de Dados**: Exibe todos os clientes cadastrados até o momento. Apresenta uma lista com o nome e o login de cada cliente.

## Compilação e Execução

Para compilar e executar o programa, siga as etapas abaixo:

1. Certifique-se de ter um compilador C++ instalado em seu sistema.

2. Salve todos os arquivos do programa no mesmo diretório.

3. Abra um terminal ou prompt de comando e navegue até o diretório onde os arquivos foram salvos.

4. Execute o comando de compilação para criar o executável:

```
g++ main.cpp -o cadastro_clientes
```
5. Após a compilação, execute o programa com o seguinte comando:

```
./cadastro_clientes
```

6. O menu principal será exibido. Utilize as opções numéricas para interagir com o programa.

## Observações

- Ao adicionar um novo cliente, o programa verifica se o login e o email já estão em uso por outros clientes.

- Durante o cadastro de um cliente, caso as informações fornecidas sejam inválidas ou já estejam em uso, o programa solicitará que sejam fornecidas novas informações válidas.

- Ao adicionar um endereço a um cliente, é necessário informar o login do cliente correspondente. Caso o cliente não seja encontrado, é possível cadastrar um novo cliente.

- Os dados dos clientes são armazenados em memória durante a execução do programa e são perdidos quando o programa é encerrado.

- O programa utiliza a função limparTela() para limpar a tela do console, tornando a interação com o menu mais clara.

- O código está estruturado em diferentes arquivos para melhor organização e manutenção. Os arquivos estão separados em main.cpp, Menu.h, Menu.cpp, Cliente.h e Cliente.cpp.

- Sinta-se à vontade para utilizar e modificar o programa de acordo com suas necessidades.

## Contribuições

Contribuições são bem-vindas! Se você tiver alguma ideia, sugestão ou relatório de bug, abra um problema ou envie um pull request.

## Licença

Este projeto está licenciado sob a [Licença MIT](LICENSE).
