#include <iostream>

float converter(float num, int tipo1, int tipo2) {
    float resultado;
    if (tipo1 == 1 && tipo2 == 1) {
        resultado = (num - 32) * 5 / 9;
    }
    else if (tipo1 == 1 && tipo2 == 2) {
        resultado = (num - 32) * 5 / 9 + 273.15;
    }
    else if (tipo1 == 2 && tipo2 == 1) {
        resultado = (num * 9 / 5) + 32;
    }
    else if (tipo1 == 2 && tipo2 == 2) {
        resultado = num + 273.15;
    }
    else if (tipo1 == 3 && tipo2 == 2) {
        resultado = num - 273.15;
    }
    else {
        resultado = (num - 273.15) * 9 / 5 + 32;
    }
    return resultado;
}

int main()
{
    float num;
    int primeiraSelecao;
    int segundaSelecao;
    std::string tipo;
    std::string tipoArr[2];
    std::cout << "\nSelecione a temperatura inicial.\n\n";
    std::cout << "1 para Fahrenheit\n";
    std::cout << "2 para Celsius\n";
    std::cout << "3 para Kelvin\n";
    std::cout << "4 para sair\n\n";
    std::cin >> primeiraSelecao;

    if (primeiraSelecao == 1) {
        tipo = "fahrenheit";
        tipoArr[0] = "Celsius";
        tipoArr[1] = "Kelvin";
    }
    else if (primeiraSelecao == 2) {
        tipo = "celsius";
        tipoArr[0] = "Fahrenheit";
        tipoArr[1] = "Kelvin";
    }
    else if (primeiraSelecao == 3){
        tipo = "kelvin";
        tipoArr[0] = "Fahrenheit";
        tipoArr[1] = "Celsius";
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
    std::cout << "\n" << converter(num, primeiraSelecao, segundaSelecao);
}