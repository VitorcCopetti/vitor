#include <cstdlib>
#include <iostream>
 
int main( ) {
    int x, y;
    std::cout << "Digite dois números: ";
    std::cin >> x >> y;
 
    int soma = x + y;
 
    std::cout << "A soma dos números é: " << soma << std::endl;

    //Se a soma dos valores digitador for maior que 10,
    //mostre na tela a mensagem: "A soma dos números é maior que 10"

    if (x > y)
    {
        std::cout <<  " O primeiro valor digitado é maior" << x << std::endl;
        if (x < y)
        {
            std::cout <<   "o segundo número é maior" << y << std::endl;
        }
    }
    
    return EXIT_SUCCESS;
}