#include <iostream>
int main()
{
    char tipoAtual;
    char tipoDesejado;

    while (true)
    {
        std::cout << "Deseja converter a temperatura como?\n";
        std::cout << "(Utilize C - Celsius; F - Fahrenheit; K - Kelvin)\n";

        std::cout << "De: ";

        std::cin >> tipoAtual;

        std::cout << "Para: ";

        std::cin >> tipoDesejado;

        double temperatura;
        std::cout << "Informe a temperatura: ";
        std::cin >> temperatura;

        if (tipoAtual == 'C' && tipoDesejado == 'F')
        {
            temperatura = temperatura * 1.8 + 32;
            tipoAtual = tipoDesejado;
            std::cout << temperatura << tipoAtual << "\n";
        }
        if (tipoAtual == 'C' && tipoDesejado == 'K')
        {
            temperatura = temperatura + 273.15;
            tipoAtual = tipoDesejado;
            std::cout << temperatura << tipoAtual << "\n";
        }
    }
    return 0;
}