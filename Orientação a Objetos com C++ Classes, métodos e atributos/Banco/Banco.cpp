#include <iostream>
#include "Conta.hpp"

using namespace std;

int main() {
	Conta UmaConta;
	UmaConta.definirNomeTitular("Joao");

	Conta OutraConta;

	OutraConta.depositar(500);
	OutraConta.sacar(400);

	cout << "UmaConta: " << UmaConta.mostraSaldo() << " OutraConta: " << OutraConta.mostraSaldo() << endl;
	cout << "nome:" << UmaConta.mostraNome() << endl;
}