#include <iostream>
#include <locale.h>

int main(){
    // soma
    int a = 5;
    int b = 8;

    int soma = a+b;
    
    //subtração
    int c = 10;
    int d = 6;

    int diff = c - b;

    //Multiplicação
    int e = 3;
    int f = 4;

    int product = e * f;

    //Divisão
    int g = 12;
    int h = 4;

    int quocient = g / h;
    //Sobra de divisão
    int i = 15;
    int j = 4;

    int sobra = i % j;

    std::cout << "Soma de A + B = " << soma << std::endl;
    std::cout << "Subtração de C - B = " << diff << std::endl;
    std::cout << "Multiplicação de E * F = " << product << std::endl;
    std::cout << "Divisão de G / H = " << quocient << std::endl;
    std::cout << "Sora da divisão de I / J = " << sobra << std::endl;
}
