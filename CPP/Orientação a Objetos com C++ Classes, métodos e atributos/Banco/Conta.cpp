#include <iostream>
#include "Conta.hpp"

int Conta::numeroContas = 0;

int Conta::mostraNumeroConta() {
	return numeroContas;
}

Conta::Conta(std::string numero, Titular titular) :
	numero(numero), titular(titular), saldo(0)
{
	numeroContas++;
}

Conta::~Conta() {
	numeroContas--;
}

std::string Conta::mostraNumero() const {
	return numero;
}

float Conta::mostraSaldo() const {
	return saldo;
}

void Conta::sacar(float valoASacar) {
	if (valoASacar < 0) {
		std::cout << "Nao pode sacar valor negativo!" << std::endl;
		return;
	}
	if (valoASacar > saldo) {
		std::cout << "Saldo insuficiente!" << std::endl;
		return;
	}
	saldo -= valoASacar;
}

void Conta::depositar(float valoADepositar) {
	if (valoADepositar < 0) {
		std::cout << "Nao pode sacar valor negativo!" << std::endl;
		return;
	}
	saldo += valoADepositar;
}