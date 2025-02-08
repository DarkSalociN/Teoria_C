#include <iostream>
#include <locale.h>

/*Loops are an essencial concept in programming that allow you to execute a block of code
repeatedly until a specific condition is met. In c++ there are three main types of loops:
    for, while, and do-while.
*/

int main(){
    /* FOR  loop        
                    used when you know the number of times you want to transverse a block of code
                it consist of an initialization statement, a condition, and a increment/decrement
    
                            for (initialization; condition; increment/decrement){
            
                                // block of code  to execute
                            }
    */

        for (int i = 0; i < 5; i++){
            std::cout << "interação: " << i << std::endl;
        }
        return 0;
   
   
}