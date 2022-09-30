
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
    string palavra = argv[1];
    cout << " a palavra é  "  << argv[1] << endl;
    char letra[palavra.length()];
    int letrasRepetidas[palavra  .length()];
    int contador = 0;
    int maisRepetido = 0;
    char letraRepetida;    
    for (int i = 0; i < palavra.length(); i++)
    {
        for (int j = 0; j < palavra.length(); j++)
        {
            letra[j] = palavra[j];
            if (letra[i] == letra[j])
            {
                contador++;
                letrasRepetidas[i] = contador;
            }
        }
        contador=0;
        if (letrasRepetidas[i]> 1)
        {
            cout<< "a letra: ("<< letra[i]<< ") repetiu!"<<endl;
        }else{
            cout<< "a letra: ("<<letra[i]<< ") repetiu-se somente 1 vez!"<<endl;
        }
         if (maisRepetido < letrasRepetidas[i])
        {
            maisRepetido = letrasRepetidas[i];
            letraRepetida = letra[i];
        }
        
    }
    cout<<"a letra que mais se repetiu foi: ("<<letraRepetida<<") e repetiu-se: "<< maisRepetido<< " vezes"<<endl;
}
