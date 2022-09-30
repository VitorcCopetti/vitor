#include <cstdlib>
#include <iostream>

int main ( ) {
    float x, y;
    std:: cout << "digite dois números: ";
    std:: cin >> x >> y;
    float media = (x + y)/2;
    std:: cout << "A média é:"<< media << std::endl;
    if (media < 10)
    {
      std:: cout << "Digite valores maiores!";
    }
    else if (media > 10 && x!=0 && y!=0 )
    {
      (x<y && x<5);
      std:: cout << "o primeiro número digitado é muito pequeno:" std::endl;
    } 
}