#include <iostream>
#include "Heranca.h"

int main()
{
	//Heran�a
	PessoaFisica * pessoaF = new PessoaFisica("", "Santos Dumont");
	pessoaF->cpf;
	pessoaF->Nome();
	pessoaF->Endereco();
	delete pessoaF;

	//Composi��o
	PessoaJuridica * pessoaJ = new PessoaJuridica(new Pessoa(), "24252/0001-00");
	pessoaJ->pessoa->nome = "Octa";
	pessoaJ->pessoa->endereco = "Santos Dumont";
	delete pessoaJ;
}
