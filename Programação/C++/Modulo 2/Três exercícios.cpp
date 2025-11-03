#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));//Primeiro exercício:
	float n = 0;
	int idade[5]{}, n2;
	cout << "Primeiro exercício" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Me de a " << i + 1 << "º idade : ";
		cin >> idade[i];
		if (idade[i] < 0 || idade[i] > 120)
		{
			cout << "Idade invalida, tente outra entre 0 a 120.\n";
			i--;
		}
	}
	cout << "Quer calcular : Media das idades(1); Idade mais alta(2); Idade mais baixa(3) : ";
	cin >> n2;
	switch (n2) {
	case 1:
		for (int i = 0; i < 5; i++)
		{
			n = n + idade[i];
		}
		cout << "A media das idades e igual a : " << n / 5 << endl;
		break;
	case 2:
		n = idade[0];
		for (int i = 0; i < 5; i++)
		{
			if (n < idade[i + 1])
			{
				n = idade[i + 1];
			}
		}
		cout << "A idade mais alta e : " << n << endl;
		break;
	case 3:
		n = idade[0];
		for (int i = 0; i < 4; i++)
		{
			if (n > idade[i + 1])
			{
				n = idade[i + 1];
			}
		}
		cout << "A idade mais baixa e : " << n << endl;
		break;
	default:
		cout << "Opcao invalida." << endl;
		break;
	}
	cout << "Segundo exercício" << endl;//Segundo exercício:
	int bpm[5];
	for (int i = 0; i < 5; i++)
	{
		bpm[i] = (rand() % 140) + 60;
		if (bpm[i] <= 90)
		{
			cout << bpm[i] << " : Batimento normal \n";
		}
		else if (bpm[i] <= 130) {
			cout << bpm[i] << " : Batimento acelerado \n";
		}
		else {
			cout << bpm[i] << " : Batimento muito alto \n";
		}
	}
	cout << "Terceiro exercício" << endl;//Terceiro exercício:
	int num[5], aux, aux2;
	for (int i = 0; i < 5; i++)
	{
		cout << "Digite o " << i + 1 << "º número : ";
		cin >> num[i];
	}
	cout << "Qual número queres verificar? : ";
	cin >> aux;
	for (int i = 0; i < 5; i++)
	{
		if (aux == num[i])
		{
			aux2 = i;
		}
	}
	for (int i = aux2; i < 5; i++)
	{
		if (num[aux2] > num[i])
		{
			cout << "O " << num[i] << endl;
		}
	}
}
