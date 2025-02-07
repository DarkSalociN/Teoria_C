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

/*
operação de relação
    
    igual a ( == ) retorna true se ambas as operações forem verdadeira

        5 == 5      true
        3 == 4      false

    diferente de ( != ) retorna true se as operações forem diferente

        5 != 2      true
        1 != 1      false

    maior que ( > ) retorna true se a primeira operação for maior que a segunda

        5 > 3       true
        2 > 3       false

    menor que ( < ) retorna true se a primeira operação for menor que a segunda

        3 < 5       true
        6 < 5       false

    maior ou igual que ( >= ) returna true se a primeira operação for maior ou igual a segunda

        5 >= 5 true
        5 >= 6 true
        5 >= 2 false

    menor ou igual que ( <= ) retorna true se a primeira operação for menor ou igual a segunda

        4 <= 4 true
        4 <= 3 true
        5 <= 4 false

operações lógicas

    AND ( && ) retorna true se ambas as operações forem verdadeiras

        true && true        true
        true && false       false

    OR ( || ) retorna true se qualquer uma das operações for verdadeira

        true || false       true
        false || false      false

    NOT ( ! ) retorna true se qualquer uma das operações for false ou vise-versa

        !true       false
        !false      true
*/ 