#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int N, Ma = 0, Me = 2147483647;// N=Resposta. Ma=maior, Me=Menor
	do {
		cout << "Me de um numero : ";
		cin >> N;
		if (N>Ma && N != 0) {
		Ma=N;
	}
	if (N<Me) {
		Me=N;
	}
	} while (N!=0);
	cout << "O maior numero é :" << Ma << endl;
	cout << "O menor numero é :" << Me << endl;
}