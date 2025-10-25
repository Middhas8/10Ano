#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
 
int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int RandNum = rand() % 100 + 1, Adv = 0, N, Con = 0;
	do {
 
		cout << "Me de um numero entre 1 e 100: ";
		cin >> N;
		Con++;
		if (N<RandNum) {
		cout << "Este numero esta abaixo do numero secreto \n";
		} if (RandNum<N) {
		cout<< "Este numero esta acima do numero secreto\n";
		} if (RandNum==N) {
		cout << "Voce acertou o numero secreto!\n";
		Adv = 1; }
 
	} while (Adv == 0);
	cout << "O numero de tentavias necessario foi: " << Con << endl;
	if (Con == 1) {
		cout << "COMO?! TRAPACEADOR!";
	} else if (Con <= 5) {
		cout << "Voce tem otimos instintos!";
	} else if (Con <= 15) {
		cout << "Okay.";
	} else if (Con <= 25) {
		cout << "Uhhh... ok, trabalhe no seu processo cognitivo...";
	} else {
	   	cout << "Não era para ser tao dificil... boa sorte na proxima..";
	}
	return 0;
}
