#include <iostream>
#include <string>
#include "adiciona_palavra.hpp"
#include "nao_acertou.hpp"

extern std::string palavra_secreta;

void resultado() {
	std::cout << "A palavra era " << palavra_secreta << std::endl;

	if (!nao_acertou()) {
		std::cout << "Parabens! Voce acertou a palavra!" << std::endl;
		std::cout << "Deseja adicionar uma palavra(S/N)? ";
		char opcao;
		std::cin >> opcao;
		if (opcao == 'S')
			adiciona_palavra();
		else
			std::cout << "Obrigado pela participacao!" << std::endl;
	}
	else
		std::cout << "Infelizmente voce errou a palavra! Tente novamente!" << std::endl;
	std::cout << "Fim de Jogo!" << std::endl;
}