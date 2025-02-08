#include <iostream>

/* WHILE loop
                    A while loop runs ans long as a specific condition is TRUE. The loop checks
                for the condition before entering the body of the loop.

                    While (condition){

                        // block of code to execute
                    
                    }

   */


int main(){

    int i = 0;
    while (i < 5){
        std::cout << "Interação: " << i << std::endl;
        i++;
    }
}