/* Tipos de dados derivados:Sao elementos de dados construidos a partir de elementos mais basicos
de codigo, sao utilizados para armazenar e manipular dados de maneira mais organizada e eficiente.
Incluem arrays, ponteiros, referencia, listas e outras formas de agregacao de dados.
*/

    /*Array : utilizado para armazenar multiplos valores do mesmo elemento de dado em espacos
    de memoria consecutivos.*/
        int numero[5] = {1, 2, 3, 4, 5};

    // Ponteiros : Utilizados para armazenar o endereco da memoria de uma variavel.
        int num = 42;
        int* Enum = &num;
    //Referencia : Sao uma maneira alternativa de compartilhar endereco de memoria entre variaveis.
        int num = 42;
        int& numRef = num;

    //User-Defined DataTypes: Sao elementos que sao definidos pelo programador, como structs, classes. etc

    struct Person{
        std::string name;
        int age;
        float height;
    };

    Person p1 = {"John Doe", 30, 5.9};

    /*Classes : Similares a Structs, mas a acessibilidade aos dados dos membros e funcoes 
    sao definidos por acessos especificos. Por padrao o acesso dos membros de uma classe
    sao definidos como private.
    */

    class Person{
        public:
            std::string name;
            int age;

            void printInfo(){
                std::cout << "Name: " << name << "Age:" << age << std::endl;
            };
    };

    Person p1;
    p1.name = "John Doe";
    p1.age = 30;

// Union : E utilizado para armazenar diferentes dipos de dados em um espaco de memoria

    union Data{
        int num;
        char letter;
        float decimal;
    };
    
    Data myData;
    myData.num = 42;