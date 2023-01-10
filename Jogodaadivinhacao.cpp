#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Poruguese_Brazil");
    cout << "*************************************" << endl;
    cout << "* Bem-vindo ao jogo da adivinhacao! *" << endl;
    cout << "*************************************" << endl;

    int numero_secreto = 32;
    cout << "O numero secreto eh " << numero_secreto << " nao conte a ninguem" << endl;
}