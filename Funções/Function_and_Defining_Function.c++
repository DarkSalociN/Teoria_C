#include <iostream>

/*  FUNCTIONS

        Function é um grupo de declarações que realizam uma tarefa especifica, organizado como
        uma unidade separada do programa. Functions ajudam separando os blocos de codigo
        em pedaços menores, gerenciaveis, e reutilizaveis.

        standard library functions: funcoes pre-definidas desponiveis na biblioteca no c++, como
        sort(), strlen(), sqrt(), e muitas outras mais. Essas funcoes são parte da biblioteca
        padrao , entao voce precisa incluir um arquivo de leitura apropriado para usalas.

        User-defined function: Funcoes criadas pelo programador para realizar uma tarefa especifica.
        Para criar uma user-defined function, voce precisa definir a funcao e chama-la no codigo.

*/

/* Definindo uma função

            return_type function_name(paramenter list){
            
                function body
            }

    return type: tipo de data de saida produzido pelo funcao. Pode ser void, indicando uma funcao
    não retorna nenhum valor.
    function_name: Nome dada a funcao.
    parameter list: Lista de parametros/argumentos de entrada que serão necessarios para realizar
    a tarefa. É opcional, pode ser deixado em branco quando nenhum parametro é necessario.

*/

int addNumeros(int a, int b){
    int soma = a + b;
    return soma;
}


int main(){
    int num1 = 5, num2 = 10;
    int resultado = addNumeros(num1, num2);
    std::cout << "A soma é: " << resultado << std::endl;
    return 0;


}