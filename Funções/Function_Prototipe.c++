#include <iostream>

/*  FUNCTION PROTOTYPES

    Em alguns casos, voce pode querer usar a função antes de definila. Para fazer isso,
    voce precisa declarar uma Function Prototype no comeco do seu codigo.
        Uma Function Prototype é uma declaracao da funcao sem seu body, e informa o compiler sobre
        o function's name, return type, e parameters.


*/

//function prototype
int multiplicacao(int x, int z);


int main(){
    int num1 = 3, num2 = 7;
    int resultado = multiplicacao(num1,num2); // chamando a funcao
    std::cout << "O produto da equação é: " << resultado << std::endl;
    return 0;

}

//Definição da função

int multiplicacao(int x, int y){
    int produto = x * y;
    return produto;

}