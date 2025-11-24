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
	int  i, j, turma_notas[3][3];
	float med[3]{ 0,0,0 };
	for (i = 0; i < 3; i++) {
		cout << "Notas " << i + 1 << "º Aluno \n";
		bar();
		for (j = 0; j < 3; j++) {
			cout << j + 1 << "º Nota : ";
			cin >> turma_notas[i][j];
			if (turma_notas[i][j]<0 || turma_notas[i][j]>20) {
				cout <<"Nota invalida, numero apenas entre 0 a 20\n";
				j--;
			} else {
				med[i] = med[i] + turma_notas[i][j];
				if (j == 2) {
					med[i] = med[i] / 3;
					if (i != 2)
					{
						bar();
					}
				}
			}	
		}
	}

	for (int i = 0; i < 3; i++) {
		bar();
		cout << "\nMédia das notas do " << i + 1 << "º aluno : " << med[i] <<  "\n\n";
		if (i==2) {
			bar();
		}
	}
	return 0;
}
