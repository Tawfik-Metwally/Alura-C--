#pragma once
#include <string>
#include "Titular.hpp"

class Conta {
private:
	static int numeroContas;

public:
	static int mostraNumeroConta();

private:
	std::string numero;
	float saldo = 0;

public:
	Conta(std::string numero, Titular titular);
	~Conta();
	std::string mostraNumero() const;
	float mostraSaldo() const;
	void sacar(float valoASacar);
	void depositar(float valoADepositar);

private:
	void verificaNome();
};
