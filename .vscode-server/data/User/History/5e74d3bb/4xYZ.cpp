//Escreva um programa em C++ que tenha uma função que recebe um inteiro n e retorna a soma de todos os inteiros menores que n.


#include <cstdlib>
#include <iostream>
 
 using namespace std;

int soma(int n) {
  int somador = 0;
    for (size_t i = 1; i < n; i++)
    {
    if (i % 2 != 0)
    {
      somador = somador + (n - i);
    }
    }
    
    return somador;// para retornar o resultado
}


int main( ) {
    int n;
    cout << "Digite um número" << endl;
    cin >> n;
 int somador = soma(n); // aqui igualei o resultado a função 
   cout << "A soma dos números impares menores que : " << n << " São : " << somador << endl;
   return EXIT_SUCCESS;
}
