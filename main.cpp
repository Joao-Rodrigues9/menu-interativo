#include <iostream>

void calculadora();
double iniciarCalc();
void printarMenuCalc(double valorAtual);

int main()
{
    std::cout << "0- Encerrar programa\n"
              << "1- Calculadora\n"
              << "--------------------\n"
              << "O que deseja fazer?\n";

    int escolha;
    std::cin >> escolha;

    switch (escolha)
    {
    case 1:
        calculadora();
        break;

    case 0:
        break;
    }
    return 0;
}

void calculadora()
{

    double valor = iniciarCalc();

    printarMenuCalc(valor);

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
            printarMenuCalc(valor);
            break;

        case '-':
            double subtrador;
            std::cout << "Subtrair quanto?\n";
            std::cin >> subtrador;

            valor = valor - subtrador;
            printarMenuCalc(valor);
            break;

        case '*':
            double multiplicador;
            std::cout << "Multiplicar por quanto?\n";
            std::cin >> multiplicador;

            valor = valor * multiplicador;
            printarMenuCalc(valor);
            break;
        case '/':
            double divisor;
            std::cout << "Dividir por quanto?\n";
            std::cin >> divisor;

            valor = valor / divisor;
            printarMenuCalc(valor);
            break;

        case 'E':
            std::cout << "--------------------\n";
            main();
            break;

        default:
            std::cout << "Invalido\n";
            printarMenuCalc(valor);
            break;
        }
    }
}

double iniciarCalc()
{
    std::cout << "Coloque seu numero de entrada:\n";
    double num;
    std::cin >> num;

    return num;
}

void printarMenuCalc(double valorAtual)
{
    std::cout << "-------------------------------\n"
              << "E -> Retornar ao menu principal\n"
              << "+ -> Somar ao numero\n"
              << "- -> Subtrair do numero\n"
              << "* -> Multiplicar o numero\n"
              << "/ -> Dividir o numero\n"
              << "-------------------------------\n"
              << "Valor atual: " << valorAtual << "\n"
              << "-------------------------------\n"
              << "O que deseja fazer?\n";
}
