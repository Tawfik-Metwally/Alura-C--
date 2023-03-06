#include <iostream>
#include <vector>

std::vector <char> chutes_errados;
void cont_erros() {
	std::cout << "Chutes errados: ";
	for (char letra : chutes_errados)
	{
		std::cout << letra << " ";
	}
	std::cout << std::endl;
}