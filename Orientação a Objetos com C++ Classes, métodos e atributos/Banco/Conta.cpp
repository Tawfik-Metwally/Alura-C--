#include <iostream>
#include "Conta.hpp"

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