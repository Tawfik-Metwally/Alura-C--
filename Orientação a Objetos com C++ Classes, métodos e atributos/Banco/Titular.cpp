#include "Titular.hpp"
#include <iostream>

Titular::Titular(std::string cpf, std::string nome) :
	cpf(cpf), nome(nome)
{
	verificaNome();
}

void Titular::verificaNome() {
	if (nome.size() < 5) {
		std::cout << "Nome muito curto" << std::endl;
		exit(1);
	}
}

std::string Titular::mostraCpf() const {
	return cpf;
}

std::string Titular::mostraNome() const {
	return nome;
}