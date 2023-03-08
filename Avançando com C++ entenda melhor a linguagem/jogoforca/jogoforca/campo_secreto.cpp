#include <iostream>
#include "campo_secreto.hpp"

void campo_secreto(const std::string palavra_secreta, std::map <char, bool>& chutou) {
	for (char letra : palavra_secreta)
	{
		if (chutou[letra])
			std::cout << letra << " ";
		else
			std::cout << "_ ";
	}
	std::cout << std::endl;
}