#include "cabecalho.hpp"
#include "palavra_escolhida.hpp"
#include "nao_acertou.hpp"
#include "cont_erros.hpp"
#include "campo_secreto.hpp"
#include "verifica_chute.hpp"
#include "resultado.hpp"

using namespace std;

static string palavra_secreta;
static map <char, bool> chutou;
static vector <char> chutes_errados;


int main() {

	cabecalho();

	palavra_secreta = palavra_escolhida();

	while (nao_acertou(palavra_secreta, chutou) && chutes_errados.size() < 5) {

		cont_erros(chutes_errados);

		campo_secreto(palavra_secreta, chutou);

		cout << "Escreva seu chute: ";
		char chute;
		cin >> chute;
		chutou[chute] = true;

		verifica_chute(chute, chutes_errados, palavra_secreta);

		cout << endl;
	}
	resultado(palavra_secreta, chutou);
}