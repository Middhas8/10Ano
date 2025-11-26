#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

void bar() {
	cout << "===============================\n";
	return;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int  i, j, turma_notas[10][10], med[10]{ 0,0,0,0,0,0,0,0,0,0 };
	for (i = 0; i < 10; i++) {
		system("CLS");
		cout << "Notas " << i + 1 << "º Aluno \n";
		bar();
		for (j = 0; j < 10; j++) {
			cout << j + 1 << "º Nota : ";
			cin >> turma_notas[i][j];
			if (turma_notas[i][j] < 0 || turma_notas[i][j]>20) {
				cout << "Nota invalida, numero apenas entre 0 a 20\n";
				j--;
			}
			else {
				med[i] = med[i] + turma_notas[i][j];
				if (j == 9) {
					med[i] = med[i] / 10;
					if (i != 9)
					{
						bar();
					}
				}
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		bar();
		cout << "\nMédia das notas do " << i + 1 << "º aluno : " << med[i] << "\n\n";
		if (i == 9) {
			bar();
		}
	}
	return 0;
}
