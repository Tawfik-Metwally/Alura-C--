#include <iostream>
#include <string>
using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";

bool letra_existe(char chute) {
	for (int i = 0; i < PALAVRA_SECRETA.size(); i++)
	{
		if (chute == PALAVRA_SECRETA[i]) {
			return true;
		}
	}
	return false;
}

int main() {
	cout << PALAVRA_SECRETA << endl;

	bool nao_acertou = true;
	bool nao_enforcou = true;

	while (nao_acertou && nao_enforcou) {
		char chute;
		cin >> chute;

		cout << "Seu chute foi " << chute << endl;

		if (letra_existe(chute))
		{
			cout << "Parabens! Seu chute esta certo!" << endl;
		}
		else {
			cout << "Voce errou! Tente novamente!" << endl;
		}
	}
}