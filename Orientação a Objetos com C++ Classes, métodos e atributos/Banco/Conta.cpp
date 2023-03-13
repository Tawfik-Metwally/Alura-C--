#include <iostream>
#include "Conta.hpp"

std::string Conta::mostraNumero() {
	return numero;
}

std::string Conta::mostraCpf() {
	return cpf;
}

std::string Conta::mostraNome() {
	return nome;
}

float Conta::mostraSaldo() {
	return saldo;
}

void Conta::definirNumeroConta(std::string numeroConta) {
	numero = numeroConta;
}

void Conta::definirCpfTitular(std::string cpfTitular) {
	cpf = cpfTitular;
}

void Conta::definirNomeTitular(std::string nomeTitular) {
	nome = nomeTitular;
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