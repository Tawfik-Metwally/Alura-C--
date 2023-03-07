#include <iostream>
#include <vector>
#include "letra_existe.hpp"

extern std::vector <char> chutes_errados;

void verifica_chute(char chute) {
	if (letra_existe(chute))
		std::cout << "Parabens! Seu chute esta certo!" << std::endl;
	else {
		std::cout << "Voce errou! Tente novamente!" << std::endl;
		chutes_errados.push_back(chute);
	}
}