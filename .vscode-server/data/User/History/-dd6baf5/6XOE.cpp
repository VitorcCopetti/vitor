#include <cstdlib>
#include <iostream>

int main ( ) {
    float x, y;
    std:: cout << "digite dois números: ";
    std:: cin >> x >> y;
    float media = (x + y)/2;

    if (media > 10)
    {
      std:: cout << "Digite valores maiores!";
    }
}