
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){ // pede um argumento que seria a palavra 
    string palavra = argv[1];
    cout << " a palavra é : "  << argv[1] << endl; // mostra a palavra que foi escolhida 
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
            cout<< "Caractere repetido : ("<< letra[i]<< ")"<<endl;
        }else{
            cout<< "Caractere : ("<<letra[i]<< ") Apareceu apanas uma vez!"<<endl;
        }
         if (maisRepetido < letrasRepetidas[i])
        {
            maisRepetido = letrasRepetidas[i];
            letraRepetida = letra[i];
        }
        
    }
    cout<<"O Caractere com maior número de ocorrências é : ("<<letraRepetida<<") com : "<< maisRepetido<< " ocorrências"<<endl;
}
