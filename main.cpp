#include <iostream>

int inicio();
void menu(int valorAtual);

int main()
{

    int valor = inicio();

    menu(valor);

    int escolha;

    while (true)
    {
        std::cin >> escolha;

        switch (escolha)
        {
        case 1:
            menu(valor);
            break;

        case 2:
            int somador;
            std::cout << "Somar quanto?\n";
            std::cin >> somador;

            valor = valor + somador;
            menu(valor);
            break;

        case 3:
            int subtrador;
            std::cout << "Subtrair quanto?\n";
            std::cin >> subtrador;

            valor = valor - subtrador;
            menu(valor);
            break;

        case 4:
            int multiplicador;
            std::cout << "Multiplicar por quanto?\n";
            std::cin >> multiplicador;

            valor = valor * multiplicador;
            menu(valor);
            break;

        case 5:
            int divisor;
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

int inicio()
{
    std::cout << "Indique seu numero:\n";
    int num;
    std::cin >> num;

    return num;
}

void menu(int valorAtual)
{
    std::cout << "-------------------------------\n"
              << "O que deseja fazer?\n"
              << "0 - Encerrar o programa\n"
              << "1 - Visualizar o numero\n"
              << "2 - Somar ao numero\n"
              << "3 - Subtrair do numero\n"
              << "4 - Multiplicar o numero\n"
              << "5 - Dividir o numero\n"
              << "-------------------------------\n"
              << "Valor atual: " << valorAtual << "\n"
              << "-------------------------------\n";
}
