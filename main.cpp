#include <iostream>

double inicio();
void menu(double valorAtual);

int main()
{

    double valor = inicio();

    menu(valor);

    char escolha;

    while (true)
    {
        std::cin >> escolha;

        switch (escolha)
        {
        case '+':
            double somador;
            std::cout << "Somar quanto?\n";
            std::cin >> somador;

            valor = valor + somador;
            menu(valor);
            break;

        case '-':
            double subtrador;
            std::cout << "Subtrair quanto?\n";
            std::cin >> subtrador;

            valor = valor - subtrador;
            menu(valor);
            break;

        case '*':
            double multiplicador;
            std::cout << "Multiplicar por quanto?\n";
            std::cin >> multiplicador;

            valor = valor * multiplicador;
            menu(valor);
            break;

        case '/':
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
              << "0 -> Encerrar o programa\n"
              << "+ -> Somar ao numero\n"
              << "- -> Subtrair do numero\n"
              << "* -> Multiplicar o numero\n"
              << "/ -> Dividir o numero\n"
              << "-------------------------------\n"
              << "Valor atual: " << valorAtual << "\n"
              << "-------------------------------\n";
}
