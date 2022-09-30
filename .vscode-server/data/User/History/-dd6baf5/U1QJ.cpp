#include <cstdlib>
#include <iostream>
int main( ) {
   int x, y;
   std::cout << "Digite dois números: ";
   std::cin >> x >> y; 

   if (x > y)
   {
 std::cout << " O primeiro valor digitado é maior " << x << std::endl;
   }
    else
         if (x < y)
     {
            std::cout << " O segundo número é maior " << y << std::endl;
      }
   else 
   std::cout << " Os valores digitados são iguais " << std::endl;
}

int main ( ) {
    float x, y;
    std:: cout << "digite dois números: ";
    std:: cin >> x >> y;
    float media = (x + y)/2;
    std:: cout << "a media é : "<< media;
}