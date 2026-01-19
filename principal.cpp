#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    cout << "O que deseja fazer?\n"
         << "0 - Encerrar o programa\n"
         << "1 - Visualizar o numero\n"
         << "2 - Multiplicar o numero por dois\n"
         << "3 - Dividir o numero por dois\n";

    int escolha;
    cin >> escolha;

    switch (escolha)
    {
    case 1:
        cout << num << "\n";
        break;

    case 2:
        num = num * 2;
        cout << num << "\n";
        break;

    case 3:
        num = num / 2;
        cout << num << "\n";
        break;

    default:
        break;
    }
    return 0;
}