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

vector<string> le_arquivo() {
	ifstream arquivo;

	arquivo.open("Palavras.txt");
	if (arquivo.is_open()) {

		int quantidade_palavras;
		arquivo >> quantidade_palavras;

		vector <string> palavras_do_arquivo;

		for (int i = 0; i < quantidade_palavras; i++)
		{
			string palavra_lida;
			arquivo >> palavra_lida;
			palavras_do_arquivo.push_back(palavra_lida);
		}
		arquivo.close();
		return palavras_do_arquivo;
	}
	else {
		cout << "Nao possivel abrir o arquivo" << endl;
		exit(0);
	}
}

void palavra_escolhida() {
	vector<string> palavras = le_arquivo();
	srand(time(NULL));
	int indice_sorteado = rand() % palavras.size();
	palavra_secreta = palavras[indice_sorteado];
}


void salva_arquivo(vector<string> nova_lista) {
	ofstream arquivo;
	arquivo.open("Palavras.txt");
	if (arquivo.is_open()) {

		arquivo << nova_lista.size() << endl;

		for (string palavra : nova_lista) {
			arquivo << palavra << endl;
		}
		arquivo.close();
	}
	else {
		cout << "Nao possivel abrir o arquivo" << endl;
		exit(0);
	}
}

void adiciona_palavra() {
	cout << "Digite uma palavra tudo maiusculo: " << endl;
	string nova_palavra;
	cin >> nova_palavra;

	vector<string> lista_palavras = le_arquivo();
	lista_palavras.push_back(nova_palavra);

	salva_arquivo(lista_palavras);
}

void resultado() {
	cout << "A palavra era " << palavra_secreta << endl;

	if (!nao_acertou()) {
		cout << "Parabens! Voce acertou a palavra!" << endl;
		cout << "Deseja adicionar uma palavra(S/N)? ";
		char opcao;
		cin >> opcao;
		if (opcao == 'S')
			adiciona_palavra();
		else
			cout << "Obrigado pela participacao!" << endl;
	}
	else
		cout << "Infelizmente voce errou a palavra! Tente novamente!" << endl;
	cout << "Fim de Jogo!" << endl;
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