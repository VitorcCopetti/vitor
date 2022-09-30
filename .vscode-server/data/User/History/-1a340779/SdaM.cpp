#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string palavra = argv[1];
    char letra[palavra.length()];
    int repetiçãodeletra[palavra.length()];
    int contador = 0;
    for (int i = 0; i < palavra.length(); i++)
    {
        letra[i] = palavra[i];
        for (int j = 0; j < palavra.length(); j++)
        {
            if (letra[i] == letra[j])
            {
                contador++;
                repetiçãodeletra[i] = contador;
            }
        }
        contador = 0;
    }

    for (int i = 0; i < palavra.length(); i++)
    {
        if (repetiçãodeletra[i] <= 1)
        {
            cout << "a letra: [" << letra[i] << "] repetiu-se somente uma vez " << endl;
        }
        else
        {
            cout << "a letra: [" << letra[i] << "] repetiu" << endl;
        }
    }

    int maior = 0;
    char letramaior;
    for (int i = 0; i < palavra.length(); i++)
    {
        if (maior < repetiçãodeletra[i])
        {
            maior = repetiçãodeletra[i];
            letramaior = letra[i];
        }
    }
    cout << "A letra que mais se repetiu foi : [" << letramaior << "] repetiu : " << maior << " vezes " << endl;
}