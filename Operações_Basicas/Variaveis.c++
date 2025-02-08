#include <iostream>
#include <locale.h>

using namespace std;


int main(){

    setlocale (LC_ALL,"Portuguese");

    string nome;
    int idade;

    cout << "Digite seu Nome: \n";
    cin >> nome;        //armazenar dados na variável “NOME”

    cout << "Digite sua Idade: \n";
    cin >> idade;       //armazenar dados na variável "idade"

    cout << "—————————\n";
    cout << "Nome: " << nome << "\n";       //mostra no terminal o resultado de "NOME"
    cout << "Nome: " << idade << "\n";      //mostra no terminal o resultado de "IDADE"

return 0;
}