#pragma once
#include <string>
#include "Titular.hpp"

class Conta {
private:
	static int numeroContas;

public:
	static int mostraNumeroConta();

private:
	Titular titular;
	std::string numero;
	float saldo;

public:
	Conta(std::string numero, Titular titular);
	~Conta();
	std::string mostraNumero() const;
	float mostraSaldo() const;
	void sacar(float valoASacar);
	void depositar(float valoADepositar);
};
