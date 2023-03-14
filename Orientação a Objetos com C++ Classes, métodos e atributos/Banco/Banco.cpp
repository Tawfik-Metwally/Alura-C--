#include <iostream>
#include "Conta.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta) {
	cout << "Seu Saldo eh: " << conta.mostraSaldo() << endl;
}

int main() {
	Conta UmaConta("123456", "123.456.789-10", "Paulo");
	//UmaConta.definirNomeTitular("Joao");

	UmaConta.depositar(500);
	UmaConta.sacar(400);

	ExibeSaldo(UmaConta);
	cout << "nome:" << UmaConta.mostraCpf() << endl;
}