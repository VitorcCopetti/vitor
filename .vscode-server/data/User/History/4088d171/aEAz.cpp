#include <cstdlib>
#include <iostream>
int main() {
  
   double* px;
 
   double x = 5.1234;
 
   std::cout << "X: " << x << " PX: " << *px << std::endl;
 
   px = &x;
   std::cout << "X: " << x << " PX: " << *px << std::endl;
  
   *px = 1.2345;
  
   std::cout << "X: " << x << " PX: " << *px << std::endl;
 
   return EXIT_SUCCESS;
}
