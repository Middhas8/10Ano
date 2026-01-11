#include <iostream> 
#include <string> 
#include <locale.h> 
#include <cstdlib> 
#include <time.h>
using namespace std;

int Tamanho = 10;

float Med(int n[]) {
int res = 0;
float media;

for (int i = 0; i < Tamanho; i++) {
    res += n[i];
	}
media = res;
media = media / Tamanho;
return media;
}

int Men(int n[]) {
int menor = n[0];
for (int i = 1; i < Tamanho; i++) {
    if (n[i] < menor) {
        menor = n[i];
    }
	}
return menor;
}

int Mai(int n[]) {
int maior = n[0];
for (int i = 1; i < Tamanho; i++) {
    if (n[i] > maior) {
        maior = n[i];
    }
	}
return maior;
}

int main() {
setlocale(LC_ALL, "Portuguese");

int Opc = 1;
int Numero[10] = { 0 };

for (int i = 0; i < Tamanho; i++) {
    cout << i + 1 << "º Numero : ";
    cin >> Numero[i];
	}

string Bar1 = "\n==============================\n";
string Bar2 = "\n------------------------------\n";

do {
    system("cls");
    cout << Bar1 << "            MENU" << Bar1
        << "     1 : média dos números" << Bar2
        << "     2 : achar o menor" << Bar2
        << "     3 : achar o maior" << Bar2
        << "     0 : sair" << Bar1;

    cin >> Opc;

    switch (Opc) {
    case 1:
        cout << "Média = " << Med(Numero);
        break;
    case 2:
        cout << "Menor = " << Men(Numero);
        break;
    case 3:
        cout << "Maior = " << Mai(Numero);
        break;
    case 0:
        cout << "Tchau";
        break;
    default:
        cout << "Opção Incorreta, tente novamente.";
        break;
    }

    if (Opc != 0) {
        cout << "\nPressione enter para continuar...";
        cin.ignore();
        cin.get();
    }

	} while (Opc != 0);

return 0;
}
