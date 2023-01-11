#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Poruguese_Brazil");
    cout << "*************************************" << endl;
    cout << "* Bem-vindo ao jogo da adivinhacao! *" << endl;
    cout << "*************************************" << endl;

    const int NUMERO_SECRETO = 32;

    int chute;
    cout << "Qual seu chute? ";
    cin >> chute;
    cout << "O valor do seu chute eh " << chute << endl;

    bool acertou = chute == NUMERO_SECRETO;
    bool maior = chute > NUMERO_SECRETO;

    if (acertou)
    {
        cout << "Parabens! Voce acertou o numero secreto!" << endl;
    }
    else if (maior)
    {
        cout << "Seu chute foi maior que o numero secreto!" << endl;
    }
    else
    {
        cout << "Seu chute foi menor que o numero secreto!" << endl;
    }
}