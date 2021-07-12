#pragma once

#include <string>

using namespace std;

class Pessoa
{
public:
	string nome;
	string endereco;

public:
	Pessoa();
	virtual string Nome();
};

//Herança - relação por acoplamento
class PessoaFisica : Pessoa
{
public:
	string cpf;

public:
	PessoaFisica(string a_nome, string a_endereco);

	string Nome() override;
	string Endereco(string endereco = "");
};

//Composição
class PessoaJuridica
{
public:
	Pessoa * pessoa;
	string cnpj;

public:
	PessoaJuridica(Pessoa * pessoa, string cpnj);
};
