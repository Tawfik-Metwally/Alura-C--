#pragma once
#include <string>

class Conta {
	std::string numero;
	std::string cpf;
	std::string nome;
	float saldo = 0;

public:
	Conta(std::string numero, std::string cpf, std::string nome);
	std::string mostraNumero();
	std::string mostraCpf();
	std::string mostraNome();
	float mostraSaldo() const;
	void definirNumeroConta(std::string numeroConta);
	void definirCpfTitular(std::string cpfTitular);
	void definirNomeTitular(std::string nomeTitular);
	void sacar(float valoASacar);
	void depositar(float valoADepositar);
};
