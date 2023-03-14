#include <iostream>
#include "Conta.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta) {
	Conta UmaOutraConta("123566", "123.376.789-10", "Felipe");
	cout << "Seu Saldo eh: " << conta.mostraSaldo() << endl;
}

int main() {
	Conta UmaConta("123456", "123.456.789-10", "Paulo");
	Conta OutraConta("123566", "123.376.789-10", "Joao");
	Conta UmaOutraConta("123566", "123.376.789-10", "Pedro");

	UmaConta.depositar(500);
	UmaConta.sacar(400);
	ExibeSaldo(UmaConta);

	cout << "nome:" << Conta::mostraNumeroConta() << endl;
}