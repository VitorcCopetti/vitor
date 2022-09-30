#include <iostream>

using namespace std;
//ex3
void myFunc(double result)
{
    cout << " multiplicações: " << result << endl;
}

double multip(double x[], double y[])
{
    double resultado[5];
    for (size_t i = 0; i < 5; i++)
    {
        resultado[i] = x[i] * y[i];
        // pega o resultado gravado em i e printa na myFunc
        myFunc(resultado[i]);
    }
    return 0;
}

int main()
{
    srand(time(NULL)); // gera os numeros pela seed que é relacionado com o horario. quando nulo gera numeros elatorios sempre.
    double a[5];
    double b[5];
    for (size_t i = 0; i < 5; i++)
    {
        a[i] = rand() % 10 + 1;
        b[i] = rand() % 10 + 1;
        cout << "os numeros sao: " << a[i] << " " << b[i] << endl;
    }
 //valores vao inversos multip(double x[], double y[]) chama multip(a, b), da mesma forma que myFunc(resultado[i]); chama result
    multip(a, b); 
}
