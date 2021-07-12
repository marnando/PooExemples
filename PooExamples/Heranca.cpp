#include "Heranca.h"

Pessoa::Pessoa()
{
}

string Pessoa::Nome()
{
	return this->nome;
}

PessoaJuridica::PessoaJuridica(Pessoa *pessoa, string cpnj)
{
	this->pessoa = pessoa;
	this->cnpj = cnpj;
}

PessoaFisica::PessoaFisica(string nome, string a_endereco)
{
	this->nome = nome;
	this->endereco = a_endereco;
	this->Nome();
}

string PessoaFisica::Nome()
{
	if (this->nome.length() == 0)
	{
		this->nome = "Calos";
	}

	return this->nome;
}

string PessoaFisica::Endereco(string endereco)
{
	if (endereco.length() > 0)
	{
		this->endereco = endereco;
	}

	return this->endereco;
}
