#include <iostream>
#include <string>
#include <vector>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));
            vector<string> frases;
            string frase;// Onde a frase e armazenada antes de ser empurrada para o final do vector frases
            char LEsco;	// LEsco == Letra/caractere escolhido
            int Cont = 0; // FQnt == quantidade de frases que vai guardar, Cont == contador do caractere selecionado
            for (int i = 0; i < 1; i++) {
                cout << "Quantas frases queres guardar? : ";
                cin >> i;//agora o proximo FOR sera executado uma vez para cada frase que o usuario deseja guardar 
                cin.ignore();// para o "enter" nao ser inputado no getline
                for (int o = 0; o < i; o++) {
                    cout << "Me de a " << o + 1 << "º frase.\n";
                    getline(cin, frase);//Coloca a linha/frase inteira dentro da string frase
                    frases.push_back(frase);//Coloca a frase armazenada no final de frases
                }
            }
            
        cout << "Qual caractere quer contar? : ";
            cin >> LEsco;//O caractere selecionado pelo usuario

    for (int i = 0; i < frases.size(); i++) {//sera repetido enquanto for menor que a quantidade de frases armazenadas
        for (char c : frases[i]) {//sera repetido pela quantidade de caracteres da frase selecionada, por exemplo no inicio e a frase[0]
            if (c == LEsco) {//Caso o caractere lido seja igual ao caractere selecionado pelo usuario o contador aumenta
                Cont++;
            }
        }
    }
    if (frases.size()==1) {
        cout << "A sua frase teve " << Cont << " caracteres de '" << LEsco << "' ";
    } else {
        cout << "A suas " << frases.size() << " frases tiveram " << Cont << " caracteres de '" << LEsco << "' ";
    }
    return 0;
}
