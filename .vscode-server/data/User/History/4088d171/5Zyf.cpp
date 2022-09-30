#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  
  int a, b;
  cout << " digite dois números: ";
  cin >> a >> b; 
  int* PtrA, * ptrB;
  PtrA = &a, ptrB = &b;  
  cout << " valor do ponteiro A: " << *PtrA << " valor do ponteiro B: " << *ptrB << endl;
  PtrA = &b, ptrB = &a;
 cout << " valor do ponteiro A: " << *PtrA << " valor do ponteiro B: " << *ptrB << endl; 
}
// o PtrA é o endereço, e o *PtrA é o valor atribuido ao ponteiro.



/*
   double* px;
 
   double x = 5.1234;
 
   std::cout << "X: " << x << " PX: " << *px << std::endl; // aqui o px recebera um valor qualquer do endereço de memoria porque ainda nao foi atribuido nenhum valor para ele//
 
   px = &x; //aqui no caso foi a tribuido o valor do x ao px
   std::cout << "X: " << x << " PX: " << *px << std::endl; // aqui p px tera o mesmo valro que o X porque foi atribuido a ele no "px = &x"
  
   *px = 1.2345; // aqui ao atulizar o valor do *px atulizou também o valor do X porque ambos estão usando o mesmo endereço de memoria!!
  
   std::cout << "X: " << x << " PX: " << *px << std::endl;
 
   return EXIT_SUCCESS;
}*/
