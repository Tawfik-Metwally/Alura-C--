#include "cabecalho.hpp"
#include "palavra_escolhida.hpp"
#include "nao_acertou.hpp"
#include "cont_erros.hpp"
#include "campo_secreto.hpp"
#include "verifica_chute.hpp"
#include "resultado.hpp"

using namespace std;
//using namespace forca;

static string palavra_secreta;
static map <char, bool> chutou;
static array <char, 5> chutes_errados;
static int i = 0;
//static vector <char> chutes_errados;


int main() {

	forca::cabecalho();

	palavra_secreta = forca::palavra_escolhida();

	while (forca::nao_acertou(palavra_secreta, chutou) && i < 5) {

		forca::cont_erros(chutes_errados);

		forca::campo_secreto(palavra_secreta, chutou);

		cout << "Escreva seu chute: ";
		char chute;
		cin >> chute;
		chutou[chute] = true;

		forca::verifica_chute(chute, chutes_errados, palavra_secreta, i);

		cout << endl;
	}
	forca::resultado(palavra_secreta, chutou);
}