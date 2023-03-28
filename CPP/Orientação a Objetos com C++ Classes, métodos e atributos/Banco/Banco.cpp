#include <iostream>
#include "Conta.hpp"
#include "Titular.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta) {
	Conta UmaOutraConta("123566", Titular("123.376.789-10", "Felipe"));
	cout << "Seu Saldo eh: " << conta.mostraSaldo() << endl;
}

int main() {
	Titular titular("123.456.789-10", "Paulo");
	Conta UmaConta("123456", titular);
	Conta UmaOutraConta("123566", Titular("123.376.789-10", "Pedro"));

	UmaConta.depositar(500);
	UmaConta.sacar(400);
	ExibeSaldo(UmaConta);

	cout << "nome:" << titular.mostraNome() << endl;
	Conta OutraConta("123566", Titular("123.376.789-10", "Joao"));
}