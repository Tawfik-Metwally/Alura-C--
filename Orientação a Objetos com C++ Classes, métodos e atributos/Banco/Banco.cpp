#include <iostream>
#include "Conta.hpp"

using namespace std;

int main() {
	Conta UmaConta;
	UmaConta.numero = "123456";
	UmaConta.cpf = "123.456.789-10";
	UmaConta.nome = "Joao";
	UmaConta.saldo = 100;

	Conta OutraConta;
	OutraConta.saldo = 200;

	OutraConta.depositar(500);
	OutraConta.sacar(400);

	cout << "UmaConta: " << UmaConta.saldo << " OutraConta: " << OutraConta.saldo << endl;
}