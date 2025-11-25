#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
void bar() {
	cout << "\n============================\n";
}
void bar2() {
	cout << "\n----------------------------\n";
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int escolha = 1, num = 1, b, i, j, Matriz1[5][3], Matriz2[5][3], Cálculos[5][3];
	for (b = 0; b < 2; b++) {//b == Qual matriz
		bar();
		cout << b + 1 << "º Matriz	";
		bar();
		for (i = 0; i < 5; i++) {// i == Linha da matriz
			for (j = 0; j < 3; j++) {// j == Qual numero
				if (j == 0) {
					cout << "\nLinha número " << i + 1;
					bar();
				}
				cout << j + 1 << "º número : ";
				if (b == 0) {
					cin >> Matriz1[i][j];
				}
				else {
					cin >> Matriz2[i][j];
				}

				if (j == 2)
				{
					system("CLS");
				}
			}
		}
	}
	do {
		bar();
		cout << "Qual calculo queres fazer?";
		bar2();
		cout << "        Adição[1]";	bar2();
		cout << "       Subtração[2]";	bar2();
		cout << "     Multiplicação[3]";	bar2();
		cout << "    Nada, quero sair[0]";	bar();

		cin >> escolha;
		system("CLS");
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 3; j++) {
				if (escolha == 1) {
					Cálculos[i][j] = Matriz2[i][j] + Matriz1[i][j];
				}
				else if (escolha == 2) {
					Cálculos[i][j] = Matriz2[i][j] - Matriz1[i][j];
				}
				else if (escolha == 3) {
					Cálculos[i][j] = Matriz2[i][j] * Matriz1[i][j];
				} else {
					break;
				} 
				if (j == 0) {
					cout << " | " << Cálculos[i][j];
				} else if (j == 1) {
					cout << " : " << Cálculos[i][j];
				} else {
					cout << " : " << Cálculos[i][j] << " | \n";
				}

				if (j == 2) {
					cout << endl;
				}
				if (i == 4 && j == 2) {
					cout << "\nQueres fazer outro calculo? [ 0(Sair) / 1(Outro calculo) ] : ";
					cin >> escolha;
					break;
				}
			}
		}
	} while (escolha != 0);
}
