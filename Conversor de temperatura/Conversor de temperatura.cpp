#include <iostream>

float converter(float num, std::string de, std::string para) {
    float resultado;
    if (de == "fahrenheit" && para == "celsius") {
        resultado = (num - 32) * 5 / 9;
    }
    else if (de == "fahrenheit" && para == "kelvin") {
        resultado = (num - 32) * 5 / 9 + 273.15;
    }
    else if (de == "celsius" && para == "fahrenheit") {
        resultado = (num * 9 / 5) + 32;
    }
    else if (de == "celsius" && para == "kelvin") {
        resultado = num + 273.15;
    }
    else if (de == "kelvin" && para == "celsius") {
        resultado = num - 273.15;
    }
    else {
        resultado = (num - 273.15) * 9 / 5 + 32;
    }
    return resultado;
}

int main()
{
    while (true) {
        float num;
        int primeiraSelecao;
        int segundaSelecao;
        std::string tipo;
        std::string tipoArr[2];
        std::cout << "\nSelecione a temperatura inicial.\n\n";
        std::cout << "1 Fahrenheit\n";
        std::cout << "2 Celsius\n";
        std::cout << "3 Kelvin\n";
        std::cout << "4 para sair\n\n";
        std::cin >> primeiraSelecao;

        if (primeiraSelecao == 1) {
            tipo = "fahrenheit";
            tipoArr[0] = "celsius";
            tipoArr[1] = "kelvin";
        }
        else if (primeiraSelecao == 2) {
            tipo = "celsius";
            tipoArr[0] = "fahrenheit";
            tipoArr[1] = "kelvin";
        }
        else if (primeiraSelecao == 3) {
            tipo = "kelvin";
            tipoArr[0] = "fahrenheit";
            tipoArr[1] = "celsius";
        }
        else {
            return 0;
        }

        std::cout << "\nPara qual temperatura deseja converter?\n";
        std::cout << "1 para " << tipoArr[0] << "\n";
        std::cout << "2 para " << tipoArr[1] << "\n\n";
        std::cin >> segundaSelecao;
        std::cout << "\nInforme os graus em " << tipo << ": \n\n";
        std::cin >> num;
        if (segundaSelecao == 1) {
            std::cout << "\n" << converter(num, tipo, tipoArr[0]) << "\n";
        }
        else {
            std::cout << "\n" << converter(num, tipo, tipoArr[1]) << "\n";
        }
    }
}