#pragma once
#include <string>
class Titular
{
	std::string cpf;
	std::string nome;

public:
	Titular(std::string cpf, std::string nome);
	std::string mostraCpf() const;
	std::string mostraNome() const;

private:
	void verificaNome();
};

