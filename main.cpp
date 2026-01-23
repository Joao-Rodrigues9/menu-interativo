#include <iostream>

void calculadora();
double iniciarCalc();
void printarMenuCalc(double valorAtual);
void converterTemperatura();

int main()
{
    int escolha;
    do
    {
        std::cout << "--------------------\n"
                  << "0- Encerrar programa\n"
                  << "1- Calculadora\n"
                  << "2- Conversor de Temperatura\n"
                  << "--------------------\n"
                  << "O que deseja fazer?\n";

        std::cin >> escolha;

        if (std::cin.fail()) // caso insiram algo que não seja int
        {
            std::cout << "Invalido\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }

        switch (escolha)
        {
        case 1:
            calculadora();
            break;

        case 2:
            converterTemperatura();
            break;

        case 0:
            return 0;

        default:
            std::cout << "Invalido\n";
            continue;
        }

    } while (true);
}

void calculadora()
{

    double valor = iniciarCalc();
    printarMenuCalc(valor);

    char escolha;

    do
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
            return;

        default:
            std::cout << "Invalido\n";
            printarMenuCalc(valor);
            continue;
        }
    } while (true);
}

double iniciarCalc()
{
    std::cout << "Coloque seu numero de entrada:\n";
    double num;
    std::cin >> num;

    if (std::cin.fail())
    {
        std::cout << "Invalido, iniciando valor como 0\n";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }

    return num;
}

void printarMenuCalc(double valorAtual)
{
    std::cout << "-------------------------------\n"
              << "E -> Retornar ao menu principal\n"
              << "+ -> Adicao\n"
              << "- -> Subtracao\n"
              << "* -> Multiplicacao\n"
              << "/ -> Divisao\n"
              << "-------------------------------\n"
              << "Valor atual: " << valorAtual << "\n"
              << "-------------------------------\n";
}

void converterTemperatura()
{
    char tipoAtual, tipoDesejado;
    int escolha;
    double temperatura;

    do
    {
        std::cout << "-------------------------------\n"
                  << "0- Retonar ao menu principal\n"
                  << "1- Celsius para Fahrenheit\n"
                  << "2- Celsius para Kelvin\n"
                  << "3- Fahrenheit para Celsius\n"
                  << "4- Fahrenheit para Kelvin\n"
                  << "5- Kelvin para Celsius\n"
                  << "6- Kelvin para Fahrenheit\n"
                  << "-------------------------------\n";

        std::cin >> escolha;

        if (std::cin.fail())
        {
            std::cout << "Invalido\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }

        switch (escolha)
        {
        case 1:
            tipoAtual = 'C', tipoDesejado = 'F';
            break;

        case 2:
            tipoAtual = 'C', tipoDesejado = 'K';
            break;

        case 3:
            tipoAtual = 'F', tipoDesejado = 'C';
            break;

        case 4:
            tipoAtual = 'F', tipoDesejado = 'K';
            break;

        case 5:
            tipoAtual = 'K', tipoDesejado = 'C';
            break;

        case 6:
            tipoAtual = 'K', tipoDesejado = 'F';
            break;

        case 0:
            return;

        default:
            std::cout << "Invalido\n";
            continue;
        }

        std::cout << "Informe a temperatura de entrada: ";
        std::cin >> temperatura;

        if (std::cin.fail())
        {
            std::cout << "Invalido\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }

        if (tipoAtual == 'C' && tipoDesejado == 'F')
        {
            temperatura = temperatura * (9 / 5.0) + 32;
            std::cout << temperatura << " graus " << tipoDesejado << "\n";
        }
        else if (tipoAtual == 'C' && tipoDesejado == 'K')
        {
            temperatura = temperatura + 273.15;
            std::cout << temperatura << " graus " << tipoDesejado << "\n";
        }
        else if (tipoAtual == 'F' && tipoDesejado == 'C')
        {
            temperatura = (temperatura - 32) * (5 / 9.0);
            std::cout << temperatura << " graus " << tipoDesejado << "\n";
        }
        else if (tipoAtual == 'F' && tipoDesejado == 'K')
        {
            temperatura = (temperatura - 32) * (5 / 9.0) + 273.15;
            std::cout << temperatura << " graus " << tipoDesejado << "\n";
        }
        else if (tipoAtual == 'K' && tipoDesejado == 'C')
        {
            temperatura = temperatura - 273.15;
            std::cout << temperatura << " graus " << tipoDesejado << "\n";
        }
        else if (tipoAtual == 'K' && tipoDesejado == 'F')
        {
            temperatura = (temperatura - 273.15) * 9 / 5 + 32;
            std::cout << temperatura << " graus " << tipoDesejado << "\n";
        }

    } while (true);
}