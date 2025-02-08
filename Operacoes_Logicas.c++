#include <iostream>
#include <locale.h>

int main(){
    // And operators ( && )                   return TRUE if both operations/conditions are true.
    int a = 5, b = 10;
    if (a > 0 && b > 0){
        std::cout << "Ambas valores são positivos." << std::endl;
    }

    // OR operator ( || )                   returns TRUE if one operation/condition is true.
    int c = 5, d = -10;
    if(a > 0 || b > 0){
        std::cout << "Pelo menos uma operação é positiva." << std::endl;
    } 
    // NOT operator ( ! )                   returns the opposite of the operation/condition
    int e = 5;
    if(!(a < 0)){
        std::cout << "O valor não é negativo" << std::endl;
    }
   
    // can be utilized for more complex logical expressions
    int f = 5, g = -10, h = 15;
    if (f > 0 && (g > 0 || h > 0)){
        std::cout << "Pelo menos 2 valores são positivos." << std::endl;
    }
}