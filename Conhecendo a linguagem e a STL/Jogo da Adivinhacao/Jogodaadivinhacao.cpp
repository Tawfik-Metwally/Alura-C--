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
    int tentativas = 0;
    bool nao_acertou = true;
    double pontos = 1000.0;

    while (nao_acertou)
    {
        int chute;
        tentativas++;
        cout << "Tentativa " << tentativas << endl;
        cout << "Qual seu chute? ";
        cin >> chute;
        cout << "O valor do seu chute eh " << chute << endl;

        double pontos_perdidos = abs(chute - NUMERO_SECRETO) / 2.0;
        pontos -= pontos_perdidos;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if (acertou)
        {
            cout << "Parabens! Voce acertou o numero secreto!" << endl;
            nao_acertou = false;
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

    cout << "Fim de Jogo!" << endl;
    cout << "Voce acertou em " << tentativas << " tentativas." << endl;
    cout << fixed;
    cout.precision(2);
    cout << "Sua pontuacao foi de " << pontos << " pontos." << endl;
}