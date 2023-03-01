#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

string palavra_secreta = "MELANCIA";
map <char, bool> chutou;
vector <char> chutes_errados;

bool letra_existe(char chute) {
	for (char letra : palavra_secreta) {
		if (chute == letra)
			return true;
	}
	return false;
}

bool nao_acertou() {
	for (char letra : palavra_secreta)
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
	for (char letra : palavra_secreta)
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
	cout << "A palavra era " << palavra_secreta << endl;
	cout << "Fim de Jogo!" << endl;
}

vector<string> le_arquivo() {
	ifstream arquivo;
	arquivo.open("Palavras.txt");

	int quantidade_palavras;
	arquivo >> quantidade_palavras;

	vector <string> palavras_do_arquivo;

	for (int i = 0; i < quantidade_palavras; i++)
	{
		string palavra_lida;
		arquivo >> palavra_lida;
		palavras_do_arquivo.push_back(palavra_lida);
	}
	return palavras_do_arquivo;
}

void palavra_escolhida() {
	vector<string> palavras = le_arquivo();
	srand(time(NULL));
	int indice_sorteado = rand() % palavras.size();
	palavra_secreta = palavras[indice_sorteado];
}

int main() {

	cabecalho();

	palavra_escolhida();

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