
#include<iostream>

int main() {
    int FQ, IN, MA, PO, med;
    std::cout<<"Me diga sua nota de Fisico quimica \n";
    std::cin>>FQ;
    std::cout<<"Me diga sua nota de Ingles \n";
    std::cin>>IN;
    std::cout<<"Me diga sua nota de Matematica \n";
    std::cin>>MA;
    std::cout<<"Me diga sua nota de Portugues \n";
    std::cin>>PO;
    med=(FQ+IN+MA+PO)/(4);
     std::cout << "A média das suas 4 notas são " << med << ".";
    return 0;
}