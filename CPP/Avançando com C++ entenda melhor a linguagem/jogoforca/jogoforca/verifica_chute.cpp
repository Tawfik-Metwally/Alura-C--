#include <iostream>
#include "letra_existe.hpp"
#include "verifica_chute.hpp"

namespace forca {
	void verifica_chute(char chute, std::array <char, 5>& chutes_errados, const std::string palavra_secreta, int& i) {
		if (letra_existe(chute, palavra_secreta))
			std::cout << "Parabens! Seu chute esta certo!" << std::endl;
		else {
			std::cout << "Voce errou! Tente novamente!" << std::endl;
			chutes_errados[i] = chute;
			i++;
		}
	}
}