#include "nao_acertou.hpp"
#include <iostream>
namespace forca {
	bool nao_acertou(const std::string palavra_secreta, const std::map<char, bool>& chutou) {
		for (char letra : palavra_secreta)
		{
			if (chutou.find(letra) == chutou.end() || !chutou.at(letra)) {
				return true;
			}
		}
		return false;
	}
}