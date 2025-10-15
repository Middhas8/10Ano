#include <iostream>
#include <string>
using namespace std;

int main() {
	do {
		int num;
		char sair = 'N';
		string materia[5] = { "Portugues", "Ingles", "Historia", "Matematica", "Geografia" };
		cout << "Qual numero de materia voce quer? \n";
		cin >> num;
		cout << "A materia equivalente a " << num << " e " << materia[num];
		return 0;
	} while ('sair' == 'N');
}