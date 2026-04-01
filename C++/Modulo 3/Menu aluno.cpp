#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>//Sleep == Não usei isto para nada :/
#include <thread>
using namespace std;

void bar() {
	cout << "\n=====================================\n";
}

void bar2() {
	cout << "-------------------------------------\n";
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i, j, aux, esc = 0, notas[5][4]{ {12, 20, 8, 17},{ 20, 20, 19, 20 },{ 16, 20, 13, 15 },{ 12, 15, 8, 7 },{ 15, 10, 8, 17 } };
	do {
		system("CLS");
		bar(); cout << "                MENU"; bar();
		cout << "    1 - Ver notas de um aluno\n"; bar2();
		cout << "    2 - Ver notas de um teste\n"; bar2();
		cout << "    3 - Listar alunos com negativa \n        em pelo menos 2 testes\n"; bar2();
		cout << "    4 - Sair do menu";
		bar();
		cin >> esc;
		switch (esc) {
		default:
			cout << "Opção inválida\n";
			break;
		case 1:
			cout << "Qual aluno queres a nota[1 a 5] : ";
			cin >> aux;
			aux = aux - 1;
			cout << "As notas dele são : \n";
			for (j = 0; j < 4; j++) {
				cout << j + 1 << "º nota " << notas[aux][j] << endl;
			}
			break;
		case 2:
			cout << "Qual teste queres as nota[1 a 4] : ";
			cin >> aux;
			aux = aux - 1;
			cout << "As notas deste teste são : \n";
			for ( i = 0; i < 5; i++) {
					cout << i + 1 << "º aluno, nota : " << notas[i][aux] << endl;
			}
			break;
		case 3:
			for (i = 0; i < 5; i++) {
				aux = 0;
				for (j = 0; j < 4; j++) {
					if (notas[i][j] < 10) {
						aux++;
						if (aux == 2) {
							cout << " O aluno nº" << i + 1 << " tem duas negativas\n";
						}
						else if (aux > 2) {
							cout << " O aluno nº" << i + 1 << " tem mais que duas negativa\n";
						}
					}
				}
			}
			break;
		case 4:
			cout << "Tchau tchau \n";
			break;
		}
		if (esc!=4)
		{
			cout << "Clique enter para continuar";
			cin.get(); 	cin.ignore();
		}
	} while (esc != 4);
	return 0;
}