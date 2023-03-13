#include <iostream>
#include "Conta.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta) {
	cout << "Seu Saldo eh: " << conta.mostraSaldo() << endl;
}

int main() {
	Conta UmaConta;
	UmaConta.definirNomeTitular("Joao");

	Conta OutraConta;

	OutraConta.depositar(500);
	OutraConta.sacar(400);

	ExibeSaldo(OutraConta);
	ExibeSaldo(UmaConta);
	cout << "nome:" << UmaConta.mostraNome() << endl;
}