#include <iostream>
using namespace std;

int inicio();
void menu();

int main()
{

    int valor = inicio();

    menu();

    int escolha;

    while (true)
    {
        cin >> escolha;

        switch (escolha)
        {
        case 1:
            cout << "Valor atual: " << valor << "\n";
            menu();
            break;

        case 2:
            int somador;
            cout << "Somar quanto?\n";
            cin >> somador;

            valor = valor + somador;
            cout << "Valor atual: " << valor << "\n";
            menu();
            break;

        case 3:
            int subtrador;
            cout << "Subtrair quanto?\n";
            cin >> subtrador;

            valor = valor - subtrador;
            cout << "Valor atual: " << valor << "\n";
            menu();
            break;

        case 4:
            int multiplicador;
            cout << "Multiplicar por quanto?\n";
            cin >> multiplicador;

            valor = valor * multiplicador;
            cout << "Valor atual: " << valor << "\n";
            menu();
            break;

        case 5:
            int divisor;
            cout << "Dividir por quanto?\n";
            cin >> divisor;

            valor = valor / divisor;
            cout << "Valor atual: " << valor << "\n";
            menu();
            break;

        default:
            cout << "Programa encerrado com sucesso\n";
        }
    }
    return 0;
}

int inicio()
{
    cout << "Indique seu numero:\n";
    int num;
    cin >> num;

    return num;
}

void menu()
{
    cout << "-------------------------------\n"
         << "O que deseja fazer?\n"
         << "0 - Encerrar o programa\n"
         << "1 - Visualizar o numero\n"
         << "2 - Somar ao numero\n"
         << "3 - Subtrair do numero\n"
         << "4 - Multiplicar o numero\n"
         << "5 - Dividir o numero\n"
         << "-------------------------------\n";
}
