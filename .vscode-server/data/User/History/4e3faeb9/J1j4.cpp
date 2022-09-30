#include <iostream>
#include <string>
 
using namespace std;
 
//int main(int argc, char *argv[])
//{
   //cout << " o primeiro argumento útil é: "  << atoi(argv[1]) << endl;
   //cout << " o segundo argumento útil é: "  << atoi(argv[2]) << endl;
   //cout << " A soma é: "  << atoi(argv[1])+atoi(argv[2]) << endl;
   //return 0;
//}
int main(){
    int a, b, *ptrA, *ptrB;
    ptrA=&a;
    ptrB=&b;
    std::cout << "Digite dois números:";
    std::cin >> a >> b;
    int soma = *ptrA + *ptrB;
    std::cout << "A soma dos números é:" << soma << std::endl;
    return EXIT_SUCCESS;}