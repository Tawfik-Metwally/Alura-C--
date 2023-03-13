#include <iostream>
#include <string>

using namespace std;

struct Conta {
	string numero;
	string cpf;
	string nome;
	float saldo;
};

void sacar(Conta& conta, float valoASacar) {
	if (valoASacar < 0) {
		cout << "Nao pode sacar valor negativo!" << endl;
		return;
	}
	if (valoASacar > conta.saldo) {
		cout << "Saldo insuficiente!" << endl;
		return;
	}
	conta.saldo -= valoASacar;
}

void depositar(Conta& conta, float valoADepositar) {
	if (valoADepositar < 0) {
		cout << "Nao pode sacar valor negativo!" << endl;
		return;
	}
	conta.saldo += valoADepositar;
}

int main() {
	Conta UmaConta;
	UmaConta.numero = "123456";
	UmaConta.cpf = "123.456.789-10";
	UmaConta.nome = "Joao";
	UmaConta.saldo = 100;

	Conta OutraConta;
	OutraConta.saldo = 200;

	depositar(UmaConta, 300);

	cout << "UmaConta: " << UmaConta.saldo << " OutraConta: " << OutraConta.saldo << endl;
}