#include <cstdlib>
#include <iostream>
 
int main( ) {
   int x, y,i;
   std::cout << "Digite dois números: ";
   std::cin >> x >> y;
   std::cin >> i; 

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