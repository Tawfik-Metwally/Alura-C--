#include "salva_arquivo.hpp"
#include <fstream>
#include <iostream>

void salva_arquivo(std::vector<std::string> nova_lista) {
	std::ofstream arquivo;
	arquivo.open("Palavras.txt");
	if (arquivo.is_open()) {

		arquivo << nova_lista.size() << std::endl;

		for (std::string palavra : nova_lista) {
			arquivo << palavra << std::endl;
		}
		arquivo.close();
	}
	else {
		std::cout << "Nao possivel abrir o arquivo" << std::endl;
		exit(0);
	}
}