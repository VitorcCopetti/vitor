//Altere o código abaixo para que o trecho de código dos fors e cout estar em uma função fora da função main.
#include <iostream>
#include <string>
 
using namespace std;
 
void dias(int me, int se, int di) {
    for (int i = 1;i <= se; ++i) 
    {
        cout << "Semana:" << i << endl;
    for (int j = 1; j <= di; j++)
        {
        cout << "Dia:" << j << endl;
        }
    }
}
int main(int argc, char *argv[])
{
int mes = 1;
int semanas = 4; int diasDaSemana = 7;


dias (mes,semanas,diasDaSemana);

   return 0;
}