#include <vector>
#include <ctime>
#include "le_arquivo.hpp"
#include "palavra_escolhida.hpp"

namespace forca {
	std::string palavra_escolhida() {
		std::vector<std::string> palavras = le_arquivo();
		srand(time(NULL));
		int indice_sorteado = rand() % palavras.size();
		return palavras[indice_sorteado];
	}
}