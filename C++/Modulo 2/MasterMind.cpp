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
	int cond=0, ten=0, aux=0, cod[4], res[4]; 
	for (int i = 0; i < 4; i++)
	{
		cod[i]=rand()%2;
	}
	do
	{
		ten++;
		if (ten > 1)
		{
			aux = 0;
			cout << "\n Tente novamente.";
		}
		for (int i = 0; i < 4; i++)
		{
			cout << "Me de o " << i + 1 << "º numero da combinação, 0/1 : ";
			cin >> res[i];
			if (res[i] > 1 || res[i] < 0)
			{
				cout << "Numero invalido, escreva um 1 ou 0";
				i--;
			} else if (cod[i] == res[i])
			{
				aux++;
			}
		}
		cout << "Numeros corretos : " << aux << endl;
	} while (aux < 4);
	cout << "\nVoce precisou de " << ten <<" tentativas para adivinhar a combinação correta.";
}
