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

    int chute;
    cout << "Qual seu chute? ";
    cin >> chute;
    cout << "O valor do seu chute eh " << chute << endl;

    if (numero_secreto == chute)
    {
        cout << "Parabens! Voce acertou o numero secreto!" << endl;
    }
    else if (numero_secreto < chute)
    {
        cout << "Seu chute foi maior que o numero secreto!" << endl;
    }
    else
    {
        cout << "Seu chute foi menor que o numero secreto!" << endl;
    }
}