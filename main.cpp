#include <iostream>
int main()
{
    char tipoAtual;
    char tipoDesejado;

    std::cout << "Deseja converter a temperatura como?\n";
    std::cout << "(Utilize C - Celsius; F - Fahrenheit; K - Kelvin)\n";

    std::cout << "De: ";

    std::cin >> tipoAtual;

    std::cout << "Para: ";

    std::cin >> tipoDesejado;

    double temperatura;
    std::cout << "Informe a temperatura: ";
    std::cin >> temperatura;

    return 0;
}