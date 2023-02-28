#include <iostream>
#include <map>
#include<vector>
#include <string>
using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";
map <char, bool> chutou;
vector <char> chutes_errados;

bool letra_existe(char chute) {
	/*for (int i = 0; i < PALAVRA_SECRETA.size(); i++)
	{
		if (chute == PALAVRA_SECRETA[i]) {
			return true;
		}
	}*/ //Forma antiga

	//Forma nova do C++11 (g++ Jogodaforca.cpp -o Jogodaforca.exe -std=c++11)
	//Com makefile (mingw32-make Jogodaforca)
	for (char letra : PALAVRA_SECRETA) {
		if (chute == letra)
			return true;
	}
	return false;
}

int main() {
	//cout << PALAVRA_SECRETA << endl;

	bool nao_acertou = true;
	bool nao_enforcou = true;

	cout << "*********************" << endl;
	cout << "*** Jogo da Forca ***" << endl;
	cout << "*********************" << endl;
	while (nao_acertou && nao_enforcou) {

		cout << "Chutes errados: ";
		for (char letra : chutes_errados)
		{
			cout << letra << " ";
		}
		cout << endl;
		for (char letra : PALAVRA_SECRETA)
		{
			if (chutou[letra])
				cout << letra << " ";
			else
				cout << "_ ";
		}
		cout << endl;
		char chute;
		cin >> chute;

		chutou[chute] = true;

		//cout << "Seu chute foi " << chute << endl;

		if (letra_existe(chute))
		{
			cout << "Parabens! Seu chute esta certo!" << endl;
		}
		else {
			cout << "Voce errou! Tente novamente!" << endl;
			chutes_errados.push_back(chute);
		}
		cout << endl;
	}
}