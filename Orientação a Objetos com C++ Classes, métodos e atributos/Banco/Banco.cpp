#include <iostream>
#include <string>

using namespace std;

struct Conta {
	string numero;
	string cpf;
	string nome;
	float saldo;
};

int main() {
	Conta UmaConta;
	UmaConta.numero = "123456";
	UmaConta.cpf = "123.456.789-10";
	UmaConta.nome = "Joao";
	UmaConta.saldo = 100;

	Conta OutraConta;
	OutraConta.saldo = 200;

	cout << "UmaConta: " << UmaConta.saldo << " OutraConta: " << OutraConta.saldo << endl;
}