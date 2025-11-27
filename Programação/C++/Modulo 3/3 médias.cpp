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
	int  i, j, turma_notas[10][10], med[10]{ 0,0,0,0,0,0,0,0,0,0 }, num, num2=0;
	string nomes[10] = { "António","Anabela","Beatriz","Bernardo","Clara","Carlos","Diana","Diogo","Elisabete","Eurico" }, disciplinas[10] = { "Portugues","Ingles","Fisica","TLP","TIC","Matemática","ACS","Filosofia","Quimica","Ed.Fis." };
	for (i = 0; i < 10; i++) {
		system("CLS");
		cout << "Notas " << i + 1 << "º Aluno \n";
		bar();
		for (j = 0; j < 10; j++) {
			cout << disciplinas[j] << " Nota : ";
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
		num2 = 0;
		bar();
		cout << "\nA média da notas de " << nomes[i] << " é de : " << med[i] << "\n\n";
		for ( j = 0; j < 10; j++) {
			if (med[i] > med[j]) {
				num = med[i];
				num2++;
			}
		}
		if (i == 9) {
			bar();
		}
	}
	cout << "\nE a nota mais alta e a nota de " << nomes[num2] << " sendo a sua nota de " << med[num2];
	return 0;
}
