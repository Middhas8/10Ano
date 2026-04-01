#include <iostream>
#include <locale.h>
#include <string>

using namespace std;
int main() {

	setlocale(LC_ALL, "Portuguese");
	float qn = 0, sn = 0, n;//qn= quantos negativos, sn=soma negativos, n=numero
	char es = 'N';
	for (int i = 0; i < 10; i++)	{
		cout << "Digite um numero : ";
		cin >> n;
		if (n<0) {
			qn = qn++;
			sn = sn + n;
		}
	}
		cout << "Deseja saber quantos negativos voce escreveu(N) ou quer saber a soma deles(S)? (N/S) : ";
		cin >> es;
		if (es == 'N') {
			cout << "Voce escreveu " << qn << " numeros";
		}
		else if (es == 'S') {
			cout << "A soma dos numeros negativos e igual a " << sn;
		}
		else {
			cout << "Eu coloquei duas opções e você de alguma forma errou";
		}
	
}