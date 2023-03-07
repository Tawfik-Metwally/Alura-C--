#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "cabecalho.hpp"
#include "palavra_escolhida.hpp"
#include "nao_acertou.hpp"
#include "nao_enforcou.hpp"
#include "cont_erros.hpp"
#include "campo_secreto.hpp"
#include "verifica_chute.hpp"
#include "resultado.hpp"

using namespace std;

string palavra_secreta;
map <char, bool> chutou;
vector <char> chutes_errados;


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