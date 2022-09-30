
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){ // pede um argumento que seria a palavra 
    string palavra = argv[1]; // aqui é o segundo argumento
    cout << " a palavra é : "  << argv[1] << endl; // mostra a palavra que foi escolhida 
    char letra[palavra.length()];// determina o tamanho do arranjo, porque o palavra.length é o tamanho da palavra.
    int letrasRepetidas[palavra.length()]; 
    int contador = 0;
    int maisRepetido = 0;
    char letraRepetida;  // para dizer quais letras foram repetidas  
    for (int i = 0; i < palavra.length(); i++) 
    {
        for (int j = 0; j < palavra.length(); j++) 
        {
            letra[j] = palavra[j]; // vai organizar a palavra dentro do arranjo
            if (letra[i] == letra[j]) // se a letra for igual a outra letra vai contar no letras repetidas
            {
                contador++;
                letrasRepetidas[i] = contador;
            }
        }
       // contador=0;
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
    return EXIT_SUCCESS;
}
