#include <iostream>

int main() {
    int N1, N2, N3, N4, med;
     std::cout << "Escreva um numero.";
    std::cin >> N1;
     std::cout << "Escreva um numero.";
    std::cin >> N2;
     std::cout << "Escreva um numero.";
    std::cin >> N3;
     std::cout << "Escreva um numero.";
    std::cin >> N4;
    
    med=(N1+N2+N3+N4/4);
    
    std::cout << "A média dos números é " << med << ".";
    return 0;
}