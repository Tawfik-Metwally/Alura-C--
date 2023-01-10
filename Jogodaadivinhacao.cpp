#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Poruguese_Brazil");
    cout << "*************************************" << endl;
    cout << "* Bem-vindo ao jogo da adivinhação! *" << endl;
    cout << "*************************************" << endl;
}