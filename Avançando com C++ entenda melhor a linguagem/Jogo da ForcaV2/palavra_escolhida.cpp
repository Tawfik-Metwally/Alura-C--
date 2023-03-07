#include <string>
#include <vector>
#include <ctime>
#include "le_arquivo.hpp"

extern std::string palavra_secreta;

void palavra_escolhida() {
	std::vector<std::string> palavras = le_arquivo();
	srand(time(NULL));
	int indice_sorteado = rand() % palavras.size();
	palavra_secreta = palavras[indice_sorteado];
}