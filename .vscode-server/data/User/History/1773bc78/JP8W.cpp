#include <iostream>
#include <string>

using namespace std;

string myFunc(char l[], string n)
{
    for (int i = 0; i < n.length(); i++)
    {
        l[i] = n[i];
    }
    return l, n;
}

int main(int argc, char *argv[])
{
    string palavra = argv[1];
    char letra[palavra.length()];
    int contador[palavra.length()];
    int valor = 0;
    myFunc(letra, palavra);
    // comapara as letras
    for (int i = 0; i < palavra.length(); i++)
    {
        for (int j = 0; j < palavra.length(); j++)
        {
            if (letra[i] == letra[j])
            {
                valor++;
                contador[i] = valor;
            }
        }
        valor = 0;
    }

    for (int i = 0; i < palavra.length(); i++)
    {
        if (contador[i] <= 1)
        {
            cout << "a letra: " << letra[i] << " repetiu-se somente uma vez " << endl;
        }
        else
        {
            cout << "a letra: " << letra[i] << " repetiu-se" << endl;
        }
    }
    // ver qual a maior
    int maior = 0;
    char letramaior;
    for (int i = 0; i < palavra.length(); i++)
    {
        if (maior < contador[i])
        {
            maior = contador[i];
            letramaior = letra[i];
        }
    }
    cout << "letra que mais se repetiu foi : " << letramaior << " repetiu : " << maior << " numeor de vezes" << endl;
}