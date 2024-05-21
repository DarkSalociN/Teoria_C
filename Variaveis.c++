#include <iostream>

#include <locale.h>

using namespace std;

int main()

{

setlocale (LC_ALL,"Portuguese");

string nome;

int idade;

cout << "Digite seu Nome: \n";

cin >> nome;        //armazenar dados na variável “NOME”

cout << "Digite sua Idade: \n";

cin >> idade;

cout << "—————————\n";

cout << "Nome: " << nome << "\n";

cout << "Nome: " << idade << "\n";

return 0;

}