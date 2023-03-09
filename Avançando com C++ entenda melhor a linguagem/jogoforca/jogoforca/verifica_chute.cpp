#include <iostream>
#include "letra_existe.hpp"
#include "verifica_chute.hpp"

namespace forca {
	void verifica_chute(char chute, std::vector <char>& chutes_errados, const std::string palavra_secreta) {
		if (letra_existe(chute, palavra_secreta))
			std::cout << "Parabens! Seu chute esta certo!" << std::endl;
		else {
			std::cout << "Voce errou! Tente novamente!" << std::endl;
			chutes_errados.push_back(chute);
		}
	}
}