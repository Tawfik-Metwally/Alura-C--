#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";
map <char, bool> chutou;
vector <char> chutes_errados;

bool letra_existe(char chute) {
	for (char letra : PALAVRA_SECRETA) {
		if (chute == letra)
			return true;
	}
	return false;
}

bool nao_acertou() {
	for (char letra : PALAVRA_SECRETA)
	{
		if (!chutou[letra]) {
			return true;
		}
	}
	return false;
}

bool nao_enforcou() {
	return chutes_errados.size() < 5;
}

void cabecalho() {
	cout << "*********************" << endl;
	cout << "*** Jogo da Forca ***" << endl;
	cout << "*********************" << endl;
}

void cont_erros() {
	cout << "Chutes errados: ";
	for (char letra : chutes_errados)
	{
		cout << letra << " ";
	}
	cout << endl;
}

void campo_secreto() {
	for (char letra : PALAVRA_SECRETA)
	{
		if (chutou[letra])
			cout << letra << " ";
		else
			cout << "_ ";
	}
	cout << endl;
}

void verifica_chute(char chute) {
	if (letra_existe(chute))
		cout << "Parabens! Seu chute esta certo!" << endl;
	else {
		cout << "Voce errou! Tente novamente!" << endl;
		chutes_errados.push_back(chute);
	}
}

void resultado() {
	if (!nao_acertou())
		cout << "Parabens! Voce acertou a palavra!" << endl;
	else
		cout << "Infelizmente voce errou a palavra! Tente novamente!" << endl;
	cout << "A palavra era " << PALAVRA_SECRETA << endl;
	cout << "Fim de Jogo!" << endl;
}

void le_arquivo() {
	ifstream arquivo;
	arquivo.open("Palavras.txt");

	int quantidade_palavras;
	arquivo >> quantidade_palavras;
	cout << "O arquivo tem " << quantidade_palavras << " palavras" << endl;

	for (int i = 0; i < quantidade_palavras; i++)
	{
		string palavra_lida;
		arquivo >> palavra_lida;
		cout << "No " << i << " : " << palavra_lida << endl;
	}
}

int main() {

	cabecalho();

	le_arquivo();

	while (nao_acertou() && nao_enforcou()) {

		cont_erros();

		campo_secreto();

		cout << "Escreva seu chute: ";
		char chute;
		cin >> chute;
		chutou[chute] = true;

		verifica_chute(chute);

		cout << endl;
	}
	resultado();
}