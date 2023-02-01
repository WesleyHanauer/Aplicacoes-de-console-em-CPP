#include <iostream>

int getOperacao() {
    int operacao;
    while (true) {
        try {
            std::cout << "\nSelecione uma operacao:\n\n";
            std::cout << "1 para adicao.\n";
            std::cout << "2 para subtracao.\n";
            std::cout << "3 para multiplicacao.\n";
            std::cout << "4 para divisao.\n";
            std::cout << "5 para sair.\n\n";
            std::cin >> operacao;

            if (std::cin.fail()) {
                throw std::exception();
            }

            break;
        }
        catch (const std::exception& e) {
            std::cout << "\nOpcao invalida, tente novamente.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return operacao;
}

double resultado(double num1, double num2, int operacao) {
    double resultado = 0.0;
        if (operacao == 1) {
            resultado = num1 + num2;
        }
        else if (operacao == 2) {
            resultado = num1 - num2;
        }
        else if (operacao == 3) {
            resultado = num1 * num2;
        }
        else if (operacao == 4) {
            resultado = num1 / num2;
        }
        return resultado;
}

int main()
{
    while (true) {
        int operacao = getOperacao();
        if (operacao == 5) {
            return 0;
        }
        double num1;
        double num2;
        std::string acao;
        if (operacao == 1) {
            acao = "somar";
        }
        else if (operacao == 2) {
            acao = "subtrair";
        }
        else if (operacao == 3) {
            acao = "multiplicar";
        }
        else if (operacao == 4) {
            acao = "dividir";
        }
        else {
            return 0;
        }

        while (true) {
            try {
                std::cout << "\nInforme o primeiro numero para " << acao << ": \n\n";
                std::cin >> num1;

                if (std::cin.fail()) {
                    throw std::exception();
                }

                break;
            }
            catch (const std::exception& e) {
                std::cout << "\nOpcao invalida, tente novamente.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
        
        while (true) {
            try {
                std::cout << "\nInforme o segundo numero para " << acao << ": \n\n";
                std::cin >> num2;

                if (std::cin.fail()) {
                    throw std::exception();
                }

                break;
            }
            catch (const std::exception& e) {
                std::cout << "\nOpcao invalida, tente novamente.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }

        std::cout << "\n" << "O resultado e igual a: " << resultado(num1, num2, operacao) << "\n";
    }
}