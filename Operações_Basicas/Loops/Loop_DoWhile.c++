#include <iostream>

/* DO WHILE     loops
    
                A do-while loop is similar to a while loop, with the key difference being that
            the loop body is executed at least once, even when the condition is FALSE.

                        do {
                            //block of code to execute.
                        
                        } while (condition);

*/

int main(){
    int i = 0;
    do {
        std::cout << "Interação: " << i << std::endl;
        i++;

    }  while(i < 5);
    return 0;


}