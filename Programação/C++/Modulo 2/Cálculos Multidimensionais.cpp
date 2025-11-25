#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
void bar() {
	cout << "\n============================\n";
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int num=0, b, i, j, Matriz1[5][3], Matriz2[5][3], Soma[5][3] = {0}; //primeiro [i] == disciplina, segundo [i] == nota
	for (b = 0; b < 2; b++) {//b == Qual matriz
			bar();
			cout << b + 1 << "º Matriz	";
			bar();
		for (i = 0; i < 5; i++) {// i == Linha da matriz
			for (j = 0; j < 3; j++) {// j == Qual numero
				if (j==0) {
					cout << "\nLinha número " << i+1;
					bar();
				}
			cout << j+1 <<"º número : ";
			if (b==0) {
				cin >> Matriz1[i][j];
			} else {
				cin >> Matriz2[i][j];
			}
		
			if (j==2)
			{
				system("CLS");
			}
			}
		}
    }
	bar();
	cout << "Qual calculo queres fazer?\n"; bar();
	cout << "          Adição\n\n          Multiplicação\n\n          Subtração\n"; bar();
}
