#include<cstdlib>
#include<iostream>
int main(){
    int a, b, *ptrA, *ptrB;
    ptrA=&a;
    ptrB=&b;
    std::cout << "Digite dois números:";
    std::cin >> a >> b;
    std::cout << "Valores:\n";
    std::cout << *ptrA << std::endl;
    std::cout << *ptrB << std::endl;
    std::cout << "Endereços:\n";
    std::cout << &ptrA << std::endl;
    std::cout << &ptrB << std::endl;
    return EXIT_SUCCESS;}