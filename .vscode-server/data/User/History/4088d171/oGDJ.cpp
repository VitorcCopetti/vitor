//Programa que mostra 7 dias durante 4 semanas
//Altere o código abaixo para que o trecho de código dos fors e cout estar em uma função fora da função main.
#include <iostream>
#include <string>
 
using namespace std;

int forecout (int maximo, int i, int j, int mes, int semana, int diasDaSemana);
int maximo = 9;
   for (int i = 1; i <= maximo; ++i) {
       for (int j = 1; j <= i; ++j) {
           cout << i;
       }
       cout << endl;
   }
 
   int mes = 1;
   int semanas = 4, diasDaSemana = 7;
 
   for (int i = 1; i <= semanas; ++i) {
       cout << "Semana: " << i << endl;
       for (int j = 1; j <= diasDaSemana; ++j) {
           cout <<"    Dia:" << j << endl;
       }
int main(int argc, char *argv[])
{
 int forecout (int maximo, int i, int j, int mes, int semana, int diasDaSemana);
   return 0;
}
