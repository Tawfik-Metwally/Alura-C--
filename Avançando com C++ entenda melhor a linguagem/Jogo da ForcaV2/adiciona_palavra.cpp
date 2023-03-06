#include "le_arquivo.hpp"
#include "salva_arquivo.hpp"
#include <string>
#include <vector>
#include <iostream>

void adiciona_palavra() {
	std::cout << "Digite uma palavra tudo maiusculo: " << std::endl;
	std::string nova_palavra;
	std::cin >> nova_palavra;

	std::vector<std::string> lista_palavras = le_arquivo();
	lista_palavras.push_back(nova_palavra);

	salva_arquivo(lista_palavras);
}