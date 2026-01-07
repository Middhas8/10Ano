/*
//AS FUNÇÕES NAO FUNCIONAM, badum-ts
#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int Tamanho = 10;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int Opc = 1, Numero[10] = {0}, Resultado;
	string Bar1 = "\n==============================\n", Bar2 = "\n------------------------------\n";
	for (int i = 0; i < Tamanho; i++) {
		cout << i + 1 << "º Numero : ";
		cin >> Numero[i];
	}
	do {
		system("cls");
		cout << Bar1 << "            MENU"<<Bar1<<"     1 : média dos números"<<Bar2<<"     2 : achar o menor"<<Bar2<<"     3 : achar o maior"<<Bar2<< "     0 : sair" << Bar1;
		cin >> Opc;
		switch (Opc)
		{
		case 1:
 
			cout << Med(Numero, Resultado);
			break;
		case 2:
			break;
		case 3:
			break;
		case 0:
			cout << "Tchau";
			break;
		default:
			cout << "Opção Incorreta, tente novamente.";
			break;
		}
		if (Opc != 0) {
			cout << "Pressione enter para continuar...";
			cin.get();
			cin.ignore();
		}
 
	} while (Opc!=0);
 
return 0;
}
 
int Med(int n[], int res) {
	int res = 0;
	for (int i = 0; i < Tamanho; i++) {
		res += n[i];
	}
	res = res / Tamanho;
	return res;
}
int Men() {
 
}
int Mai() {
 
*/
