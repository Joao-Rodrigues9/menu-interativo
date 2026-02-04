#include <iostream>
#include <ctime>
#include <vector>

void calculadora();
double iniciarCalc();
void printarMenuCalc(const double &valorAtual);
void converterTemperatura();
void jogoVinteUm();
void partidaVinteUm();
void controleDeGastos();

int main()
{
    int escolha;
    do
    {
        std::cout << "--------------------\n"
                  << "[0] - Encerrar programa\n"
                  << "[1] - Calculadora\n"
                  << "[2] - Conversor de Temperatura\n"
                  << "[3] - Jogo Vinte Um\n"
                  << "[4] - Controle de Gastos\n"
                  << "--------------------\n"
                  << "O que deseja fazer?\n";

        std::cin >> escolha;

        if (std::cin.fail()) // caso insiram algo que não seja int
        {
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

        case 3:
            jogoVinteUm();
            break;

        case 4:
            controleDeGastos();
            break;

        case 0:
            return 0;

        default:
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
        {
            double somador;
            std::cout << "Somar quanto?\n";
            std::cin >> somador;

            valor = valor + somador;
            printarMenuCalc(valor);
            break;
        }

        case '-':
        {
            double subtrador;
            std::cout << "Subtrair quanto?\n";
            std::cin >> subtrador;

            valor = valor - subtrador;
            printarMenuCalc(valor);
            break;
        }

        case '*':
        {
            double multiplicador;
            std::cout << "Multiplicar por quanto?\n";
            std::cin >> multiplicador;

            valor = valor * multiplicador;
            printarMenuCalc(valor);
            break;
        }

        case '/':
        {
            double divisor;
            std::cout << "Dividir por quanto?\n";
            std::cin >> divisor;

            valor = valor / divisor;
            printarMenuCalc(valor);
            break;
        }

        case '0':
            return;

        default:
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

void printarMenuCalc(const double &valorAtual)
{
    std::cout << "-------------------------------\n"
              << "[+] - Adicao\n"
              << "[-] - Subtracao\n"
              << "[*] - Multiplicacao\n"
              << "[/] - Divisao\n"
              << "[0] - Retornar ao menu principal\n"
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
                  << "[1] - Celsius para Fahrenheit\n"
                  << "[2] - Celsius para Kelvin\n"
                  << "[3] - Fahrenheit para Celsius\n"
                  << "[4] - Fahrenheit para Kelvin\n"
                  << "[5] - Kelvin para Celsius\n"
                  << "[6] - Kelvin para Fahrenheit\n"
                  << "[0] - Retonar ao menu principal\n"
                  << "-------------------------------\n";

        std::cin >> escolha;

        if (std::cin.fail())
        {
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
            continue;
        }

        std::cout << "Informe a temperatura de entrada: ";
        std::cin >> temperatura;

        if (std::cin.fail())
        {
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

void jogoVinteUm()
{

    int escolha;

    do
    {
        std::cout << "-------------------------------\n"
                  << "O que deseja fazer?\n"
                  << "[1] - Jogar\n"
                  << "[0] - Retonar ao menu principal\n"
                  << "-------------------------------\n";

        std::cin >> escolha;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }

        switch (escolha)
        {
        case 0:
            return;
        case 1:
            partidaVinteUm();
            break;
        default:
            continue;
        }

    } while (true);
}

void partidaVinteUm()
{

    int cartaJogador, cartaPC;
    std::vector<int> deckJogador, deckPC;
    int soma = 0, somaPC = 0;
    bool enabler = true; // caso o usuario erroneamente insira um char na escolha, vai pra falso e não add mais cartas ao deck do jogador
    srand(time(0));

    do
    {
        if (enabler == true)
        {
            cartaJogador = rand() % 10 + 1;
            deckJogador.push_back(cartaJogador);

            if (deckJogador.size() == 1)
            {
                cartaJogador = rand() % 10 + 1;
                deckJogador.push_back(cartaJogador);
            }

            if (deckPC.size() == 0)
            {
                cartaPC = rand() % 10 + 1;
                deckPC.push_back(cartaPC);

                cartaPC = rand() % 10 + 1;
                deckPC.push_back(cartaPC);
            }
            else if (somaPC <= 16)
            {
                cartaPC = rand() % 10 + 1;
                deckPC.push_back(cartaPC);
            }
        }

        enabler = true;

        std::cout << "-------------------------------\n";
        std::cout << "Suas cartas:";

        soma = 0;
        for (size_t i = 0; i < deckJogador.size(); i++)
        {
            std::cout << "[" << deckJogador[i] << "] ";
            soma += deckJogador[i];
        }

        std::cout << "\n";
        std::cout << "Soma: " << soma << "\n\n";

        std::cout << "Cartas do oponente: [" << deckPC[0] << "] ";
        for (size_t i = 0; i < deckPC.size() - 1; i++)
        {
            std::cout << "[?] ";
        }

        std::cout << "\n"
                  << "-------------------------------\n";

        if (soma > 21)
        {
            std::cout << "Jogador: "
                      << soma << "\nPerdeu!\n";
            return;
        }

        std::cout << "Deseja pegar mais uma carta?\n"
                  << "[1] - Sim     " << "[0] - Nao\n";

        somaPC = 0;
        for (size_t i = 0; i < deckPC.size(); i++)
        {
            somaPC += deckPC[i];
        }

        int escolha;
        std::cin >> escolha;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            enabler = false;
            continue;
        }

        if (escolha == 0)
        {
            while (somaPC <= 16)
            {
                cartaPC = rand() % 10 + 1;
                deckPC.push_back(cartaPC);
                somaPC += cartaPC;
            }

            somaPC = 0;
            for (size_t i = 0; i < deckPC.size(); i++)
            {
                somaPC += deckPC[i];
            }

            std::cout << "-------------------------------\n"
                      << "Cartas do oponente: ";
            for (size_t i = 0; i < deckPC.size(); i++)
            {
                std::cout << "[" << deckPC[i] << "] ";
            }
            std::cout << '\n';

            if (soma > 21 || (soma <= 21 && somaPC <= 21 && somaPC > soma))
            {
                std::cout << "Jogador: " << soma << "   " << "PC: " << somaPC << '\n';
                std::cout << "Perdeu!\n";
                return;
            }

            else if (soma == somaPC && soma <= 21 && somaPC <= 21)
            {
                std::cout << "Jogador: " << soma << "   " << "PC: " << somaPC << '\n';
                std::cout << "Empate!\n";
                return;
            }

            else if ((soma <= 21 && somaPC <= 21 && soma > somaPC) || (soma <= 21 && somaPC > 21))
            {
                std::cout << "Jogador: " << soma << "   " << "PC: " << somaPC << '\n';
                std::cout << "Ganhou!\n";
                return;
            }
        }
        else if (escolha == 1)
        {
            continue;
        }
        else
        {
            enabler = false;
            continue;
        }
    } while (true);
}

struct Gasto
{
    int id;
    std::string descricao;
    double valor;
};

Gasto registrarGasto(int id);
void listarGastos(const std::vector<Gasto> &listaGasto);

void controleDeGastos()
{
    int idGasto = 0;
    std::vector<Gasto> listaGasto;

    do
    {
        std::cout << "-------------------------------\n"
                  << "O que deseja fazer?\n"
                  << "[1] - Registrar gasto\n"
                  << "[2] - Listas gastos\n"
                  << "[3] - Total gasto\n"
                  << "[4] - Remover gasto\n"
                  << "[0] - Retonar ao menu principal\n"
                  << "-------------------------------\n";

        int escolha;
        std::cin >> escolha;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }

        switch (escolha)
        {
        case 0:
            return;

        case 1:
        {
            Gasto temp = registrarGasto(idGasto);
            listaGasto.push_back(temp);
            idGasto++;
            break;
        }

        case 2:
            listarGastos(listaGasto);
            break;

        case 3:
        {
            float gastoTotal = 0;
            for (const Gasto &gasto : listaGasto)
            {
                gastoTotal += gasto.valor;
            }
            std::cout << "Total em gastos: " << gastoTotal << '\n';
            break;
        }
        }

    } while (true);
}

Gasto registrarGasto(int id)
{
    Gasto novoGasto;

    novoGasto.id = id;
    std::cout << "Insira a descricao: ";
    std::cin.ignore(1000, '\n');
    std::getline(std::cin, novoGasto.descricao);
    std::cout << "Insira o valor: ";
    std::cin >> novoGasto.valor;

    return novoGasto;
}

void listarGastos(const std::vector<Gasto> &listaGasto)
{
    std::cout << "\n";
    for (const Gasto &gasto : listaGasto)
    {
        std::cout << "Id: " << gasto.id << '\n'
                  << "Descricao: " << gasto.descricao << '\n'
                  << "Valor: " << gasto.valor << "\n\n";
    }
}
