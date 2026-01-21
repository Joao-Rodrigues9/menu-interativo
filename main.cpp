#include <iostream>

double inicio();
void menu(double valorAtual);

int main()
{

    double valor = inicio();

    menu(valor);

    int escolha;

    while (true)
    {
        std::cin >> escolha;

        switch (escolha)
        {
        case 1:
            double somador;
            std::cout << "Somar quanto?\n";
            std::cin >> somador;

            valor = valor + somador;
            menu(valor);
            break;

        case 2:
            double subtrador;
            std::cout << "Subtrair quanto?\n";
            std::cin >> subtrador;

            valor = valor - subtrador;
            menu(valor);
            break;

        case 3:
            double multiplicador;
            std::cout << "Multiplicar por quanto?\n";
            std::cin >> multiplicador;

            valor = valor * multiplicador;
            menu(valor);
            break;

        case 4:
            double divisor;
            std::cout << "Dividir por quanto?\n";
            std::cin >> divisor;

            valor = valor / divisor;
            menu(valor);
            break;

        default:
            std::cout << "Programa encerrado com sucesso\n";
        }
    }
    return 0;
}

double inicio()
{
    std::cout << "Indique seu numero:\n";
    double num;
    std::cin >> num;

    return num;
}

void menu(double valorAtual)
{
    std::cout << "-------------------------------\n"
              << "O que deseja fazer?\n"
              << "0 - Encerrar o programa\n"
              << "1 - Somar ao numero\n"
              << "2 - Subtrair do numero\n"
              << "3 - Multiplicar o numero\n"
              << "4 - Dividir o numero\n"
              << "-------------------------------\n"
              << "Valor atual: " << valorAtual << "\n"
              << "-------------------------------\n";
}
